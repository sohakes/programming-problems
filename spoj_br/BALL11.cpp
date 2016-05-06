#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include<map>
#include<queue>
#include<cmath>
#define MAXI 1234

using namespace std;
int mat[MAXI][MAXI];
int n;
int maax;

void propaga(int k){
	for(int i=k;i<n-1;i++){
		mat[i+1][k]+=mat[i][k];
	}
}

void propagaLateral(int k){
	if(k==0)return;
	for(int i=k;i<n;i++){
		mat[i][k]+=mat[i-1][k-1];
	}
}

void propagaVolta(int k){
	if(maax<mat[k][k])maax=mat[k][k];
	for(int i=n-1;i>k;i--){
		if(mat[i-1][k]<mat[i][k])
			mat[i-1][k]=mat[i][k];
		if(maax<mat[i][k])maax=mat[i][k];
		if(maax<mat[i-1][k])maax=mat[i-1][k];
	}
}
int main(){
	
	
	while(true){
		scanf("%d",&n);
		if(n==0)break;
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				scanf("%d",&mat[i][j]);			
			}		
		}
		maax=0;
		for(int i=0;i<n;i++){
			propaga(i);
			propagaLateral(i);
			propagaVolta(i);
		}
		/*for(int i=0;i<n;i++){
		printf("\n");
			for(int j=0;j<=i;j++){
				printf("%d ",mat[i][j]);			
			}		
		}*/
		
		printf("%d\n",maax);
	
	}





}