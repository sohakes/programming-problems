
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include<stack>
#include<queue>

#include<cmath>

using namespace std;

//retorna a maior distancia
int largura(int p, int ini, int * dist, int adj[200][200]){
	queue<int> fila;
	fila.push(ini);
	dist[ini]=0;
	int x;
	int maior=0;
	while(fila.size()!=0){
		x=fila.front();
		fila.pop();
		for(int i=0;i<p;i++){
			if(adj[x][i]==1&&dist[i]<dist[x]+1){
				dist[i]=dist[x]+1;
				fila.push(i);
				if(dist[i]>maior)maior=dist[i];
			}
		}
	}
	//+1 porque começa do 0
	return maior;
}

int main () {
	int teste=0;
	int alt[200];
	int dist[200];
	int adj[200][200];
	int p,l,ini;
	int a,b;
	int res;
	while(true){
		teste++;
		scanf("%d %d %d", &p,&l,&ini);
		ini--;
		if(p==0)break;
		printf("Teste %d\n", teste);
		for(int i=0;i<p;i++){
			alt[i]=0;
			dist[i]=-1;
			for(int j=0;j<p;j++){
				adj[i][j]=0;
			}
		}
		
		for(int i=0;i<p;i++){
			scanf("%d",&alt[i]);
		}
		
		for(int i=0;i<l;i++){
			scanf("%d %d",&a, &b);
			a--;
			b--;
			if(alt[a]>alt[b])adj[a][b]=1;
		}
		res=largura(p,ini,dist,adj);
		cout<<res<<endl<<endl;
		
	}	
	return 0;
	
}