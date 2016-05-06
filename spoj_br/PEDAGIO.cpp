#include <stdio.h>
#include<stdlib.h>
#include <iostream>


using namespace std;



int main () {
	int teste=0;
	int n,m,ini,max;
	int a,b;
	int adj[500][500];
	int visitados[500];
	int fila[100000][2],ponti,pontj;
	int x, count;
	while(true){
		teste++;
		scanf("%d %d %d %d",&n,&m,&ini,&max);
		if(n==0)break;
		for(int i=0;i<=n;i++)
			visitados[i]=-1;
		for(int i=0;i<=n;i++)
			for(int j=0;j<=n;j++)
				adj[i][j]=0;
		printf("Teste %d\n",teste);
		for(int i=0;i<m;i++){
			scanf("%d %d",&a,&b);
			adj[a][b]=1;
			adj[b][a]=1;
		}
		ponti=0;
		pontj=0; //inicia a fila
		fila[pontj][0]=ini;
		fila[pontj][1]=0;
		pontj++;
		while(ponti!=pontj){
			x=fila[ponti][0];
			if(visitados[x]!=-1){
				ponti++;
				continue;
			}
			visitados[x]=fila[ponti][1];
			//printf("-%d %d-\n",x,visitados[x]);
			ponti++;
			//if(visitados[x]>max)break;
			for(int i=0;i<=n;i++){
				if(adj[x][i]==1&&visitados[i]==-1){
					fila[pontj][0]=i;
					fila[pontj][1]=visitados[x]+1;
					pontj++;
				}
			}	
		}
		for(int i=0;i<=n;i++){
			if(visitados[i]!=-1&&visitados[i]<=max&&i!=ini)
				printf("%d ",i);
		}
		printf("\n\n");
	}
	
	return 0;
}