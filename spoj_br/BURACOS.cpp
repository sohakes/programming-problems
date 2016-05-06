#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include<map>
#include<queue>
#include<cmath>
#define MAX 3001

using namespace std;

int mat[MAX][MAX];
int mat2[MAX][MAX];
int vis[MAX];
int p, b;
int total;
	int ind[MAX];
	int ind2[MAX];

/*void inverter(){
	int i, j, aux;
	printf("\n");
	for (i = 0; i < p; i++) {
		for (j = 0; j < p; j++) {
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < p; i++) {
		for (j = i+1; j < p; j++) {
			if (j != i) {
				aux = mat[i][j];
				mat[i][j] = mat[j][i];
				mat[j][i] = aux;
			}
		}
	}
	
	for (i = 0; i < p; i++) {
		for (j = 0; j < p; j++) {
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}*/

void bfs(){
	queue<int> fila;
	fila.push(0);
	int x=0;
	
	while(fila.size()!=0){
		x=fila.front();
		fila.pop();
		if(vis[x]==1)continue;
		vis[x]=1;
		for(int i=0;i<ind[x];i++){
			//if(mat[x][i]==-1)break;
			if(vis[mat[x][i]]==0){
				//vis[mat[x][i]]=1;
				fila.push(mat[x][i]);
			}
		}
	}
}

void bfs2(){
	queue<int> fila;
	fila.push(0);
	int x=0;
	
	while(fila.size()!=0){
		x=fila.front();
		fila.pop();
		if(vis[x]==1)continue;
		vis[x]=1;
		for(int i=0;i<ind2[x];i++){
			//if(mat2[x][i]==-1)break;
			if(vis[mat2[x][i]]==0){
				//vis[mat2[x][i]]=1;
				fila.push(mat2[x][i]);
			}
		}
	}
}


int main () {
	
	int d, e;
	int teste=0;
	int flag=0;

	while(true){
		flag=0;
		teste++;
		scanf("%d %d", &p, &b);
		if(p==0)break;
		printf("Teste %d\n",teste);
		for(int i=0;i<p;i++){
			vis[i]=0;
			ind[i]=0;
			ind2[i]=0;
			/*for(int j=0;j<p;j++){
				mat[i][j]=0;
			}*/
		}
		for(int i=0;i<b;i++){
			scanf("%d %d", &d, &e);
			d--;
			e--;
			mat[d][ind[d]++]=e;
			mat2[e][ind2[e]++]=d;
		}
		/*for(int i=0;i<p;i++){
			mat[i][ind[i]]=-1;
			mat2[i][ind2[i]]=-1;
		}*/
	
		bfs();
		for(int i=0;i<p;i++){
			if(vis[i]==1){
				vis[i]=0;
			}else{
				flag=1;
				printf("N\n\n");
				break;
			}
		}
		if(flag==1)continue;
		//inverter();
		bfs2();
		for(int i=0;i<p;i++){
			if(vis[i]==1){
				vis[i]=0;
			}else{
				flag=1;
				printf("N\n\n");
				break;
			}
		}
		if(flag==1)continue;
		printf("S\n\n");
		
	}
	
}







