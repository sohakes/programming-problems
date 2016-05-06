
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>
#include<list>
#include<queue>
#include <cctype>

using namespace std;

map<string, list<string> > adj;
map<string, int> vis;
map<string, string> inv;



bool compare_nocase (string first, string second)
{
  unsigned int i=0;
  while ( (i<first.length()) && (i<second.length()) )
  {
    if (tolower(first[i])<tolower(second[i])) return true;
    else if (tolower(first[i])>tolower(second[i])) return false;
    ++i;
  }
  if (first.length()<second.length()) return true;
  else return false;
}


int bfs(){
	list<string>::iterator iter;
	string no = "Erdos P.";
	vis[no]=1;
	queue<string> fila;
	fila.push(no);
	while(fila.size()!=0){
		no=fila.front();
		fila.pop();
		for (iter = adj[no].begin(); iter != adj[no].end(); iter++) {
			if(vis[*iter]==0||vis[*iter]>vis[no]+1){
				fila.push(*iter);
				vis[*iter]=vis[no]+1;
			}
		}
	}


}


int main () {
	list<string> ant;
	list<string> nomes;
	list<string>::iterator it;	
	map<string, int>::iterator iter;
	int n=0, teste=1;
	string pnome, snome;
	while(true){
		scanf("%d",&n);
		if(n==0)break;
		adj.clear();
		vis.clear();
		nomes.clear();
		for(int i=0;i<n;i++){
			//printf("hey");
			ant.clear();
			while(true){
				string rnome, rnome2;
				cin>>pnome>>snome;
				string novo(snome,0,snome.length()-1);
				rnome=novo+" "+pnome;
				for ( it=ant.begin() ; it != ant.end(); it++ ){
   					adj[rnome].push_back(*it);
   					adj[*it].push_back(rnome);
   				}
   				int achou=0;
   				for ( it=nomes.begin() ; it != nomes.end(); it++ ){
   					if(rnome==*it) achou=1;
   				}
   				if(achou==0&&rnome!="Erdos P.") nomes.push_back(rnome);
   				
				ant.push_back(rnome);
				rnome2=pnome+" "+novo;
				inv[rnome]=rnome2;
				if(snome[snome.size()-1]=='.')break;
			}
		}
		
		bfs();
		
		nomes.sort(compare_nocase);
		printf("Teste %d\n",teste);
		teste++;
		for ( it=nomes.begin() ; it != nomes.end(); it++ ){
			if(vis[*it]==0)
				cout<<inv[*it]<<": "<<"infinito"<<endl;
			else
				cout<<inv[*it]<<": "<<vis[*it]-1<<endl;
		}
		printf("\n");

		
	}

	return 0;
}