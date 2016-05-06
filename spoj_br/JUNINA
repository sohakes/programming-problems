#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include<map>
#include<queue>
#include<cmath>
#define MAX 20

using namespace std;


int maxtam =0;
int n;
int mat[MAX][MAX];
int grau[MAX];

void BronKerbosch1(int R[MAX],int P[MAX],int X[MAX], int ptam, int xtam, int rtam){
	int flag=0;

	int tam=0;	/*for(int i=0;i<n;i++)
		printf("%d ",R[i]);
	printf("\n");
	for(int i=0;i<n;i++)
		printf("%d ",P[i]);
	printf("\n");
	for(int i=0;i<n;i++)
		printf("%d ",X[i]);
	printf("\n");
	getchar();getchar();
	*/

	if(ptam==0&&xtam==0){
		if(rtam>maxtam)maxtam=rtam;
		return;
	}
	/*for(int i=0;i<n;i++){
		if(P[i]==1){
			piv=i;
			break;
		}
	}*/
	//for(int i=0;i<n;i++)
		//P[i]=1;
	for(int i=0;i<n;i++){
		if(P[i]==1){
			ptam--;
			P[i]=0;
			if(grau[i]>maxtam){
				//getchar();getchar();
				int R1[MAX], P1[MAX], X1[MAX], rtam1=0, xtam1=0, ptam1=0;
				memcpy(R1, R, sizeof(R1));
				/*for(int j=0;j<n;j++){
					R1[j]=R[j];
				}*/
				rtam1=rtam;
				if(R1[i]==0)rtam1++;
				R1[i]=1;
				
				for(int j=0;j<n;j++){
					P1[j]=0;
					X1[j]=0;
					if(mat[i][j]==1&&P[j]==1){
						P1[j]=1;
						ptam1++;

					}
					if(mat[i][j]==1&&X[j]==1){
						X1[j]=1;
						xtam1++;
					}
				}
				BronKerbosch1(R1,P1,X1,ptam1,xtam1,rtam1);
			}
			xtam++;
			X[i]=1;
		}
	}

}

int main () {
	
	int x;
	int teste=0;
	int pclique[MAX];
	int clique[MAX];
	int R[MAX], X[MAX],P[MAX];
	int tam;
	queue<int> fila;

	while(true){
		maxtam=0;
		teste++;
		scanf("%d",&n);
		if(n==0)break;
		printf("Teste %d\n",teste);
		for(int i=0;i<n;i++){
			R[i]=0;
			X[i]=0;
			P[i]=1;
			grau[i]=n;
			for(int j=0;j<n;j++){
				mat[i][j]=1;
			}
		}
		for(int i=0;i<n;i++){
			while(true){
				scanf("%d",&x);
				if(x==0)break;
				x--;
				mat[i][x]=0;
				mat[x][i]=0;
				grau[x]--;
				//grau[i]--;
				//printf("x %d i %d\n",grau[x],grau[i]);
			}
		}
		
		BronKerbosch1(R,P,X,n,0,0);
		
		printf("%d\n\n",maxtam);
		
	
	}
}







