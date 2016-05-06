#define maxar 5000
#define maxver 110
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<stdlib.h>
#include<map>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( ((int*)a)[2] - ((int*)b)[2] );
}



int main () {
	//Isso vai receber as arestas
	int arestas[maxar][3];
	//Matriz de adjacencias
	int adj[maxver][maxver];
	//Na arvore
	int arv[maxver];
	//precisa construir?
	int construir[maxar][2];
	int x,y,z;
	int n, m;
	int it=0;
	int k=0;
	int teste=0;
	while(true){
		//inicializa arv, adj, arestas
		teste++;
		cin>>n>>m;
		for(int i=0;i<=n;i++){
			arv[i]=0;
		}
		//cout<<"h";
		for(int i=0;i<=n;i++){
		arestas[i][2]=0;
			for(int j=0;j<2;j++){
				arestas[i][j]=0;
				construir[i][j]=0;
			}
		}
		//cout<<"g";
		if(n==0)break;
		for(int i =0;i<m;i++){
			cin>>x>>y>>z;
			arestas[i][0]=x;
			arestas[i][1]=y;
			arestas[i][2]=z;

		}
		//cout<<"i";
		cout<<"Teste "<<teste<<"\n";
		//Acha arvores geradoras minimas
		qsort (arestas, m, 3*sizeof(int), compare);
		arv[arestas[0][0]]=1;
		k=1;
		while(k==1){
		//cout<<"*";
		k=0;
			for(int i =0;i<m;i++){
		//		cout<<"k";
				if((arv[arestas[i][0]]==1&&arv[arestas[i][1]]==0)||(arv[arestas[i][0]]==0&&arv[arestas[i][1]]==1)){
					arv[arestas[i][1]]=1;
					arv[arestas[i][0]]=1;
					if(arestas[i][0]<arestas[i][1])
						cout<<arestas[i][0]<<" "<<arestas[i][1]<<"\n";
					else
						cout<<arestas[i][1]<<" "<<arestas[i][0]<<"\n";
					//construir[it][0]=arestas[i][0];
					//construir[it][1]=arestas[i][1];
					it++;
		//			cout<<"w";
					i=0;
				}else if(arv[arestas[i][0]]==0&&arv[arestas[i][1]]==0){
		//			cout<<"x";
					k=1;
				}
			}
		}
		cout<<"\n";
//		cout<<"oo";
		//for(int i=0;i<it;i++)
		//	cout<<construir[i][0]<<" "<<construir[i][1]<<"\n";
	}
	
	
	
	
	
	

	return 0;
}