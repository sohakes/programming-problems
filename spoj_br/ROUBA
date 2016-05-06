#define MAX 15
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<stdlib.h>
#include<map>
#include<queue>

using namespace std;


int main () {
	int n, j, carta;
	int topoJog[20],numJog[20],descarte[13];
	while(1){
		scanf("%d %d",&n,&j);
		if(n==0)break;
		for(int i=0;i<13;i++)descarte[i]=0;
		for(int i=0;i<j;i++){
			topoJog[i]=-1;
			numJog[i]=0;
		}
		
		int nJog=0,flag=0;
		//printf("z - %d - z\n",numJog[0]);
		for(int i=0;i<n;i++){
			flag=0;
			scanf("%d",&carta);
			carta--;
			//checa descartes
			if(descarte[carta]==1){
				flag=1;
				descarte[carta]=0;
				topoJog[nJog]=carta;
				numJog[nJog]+=2;
				//printf("descarte %d %d\n",nJog,numJog[nJog]);
			}
			
			//Verifica monte
			for(int k=0;k<j&&flag==0;k++){
				if(topoJog[k]==carta&&k!=nJog){
					topoJog[nJog]=carta;
					numJog[nJog]+=numJog[k]+1;
					numJog[k]=0;
					topoJog[k]=-1;
					flag=1; //a flag é pra ele não fazer prox fors
					//printf("monte %d %d\n",nJog,numJog[nJog]);
				}
			}
			
			if(topoJog[nJog]==carta&&flag==0){
				numJog[nJog]++;
				flag=1;
				//printf("ele mesmo %d %d\n",nJog,numJog[nJog]);
			}
			
			if(flag==0){
				descarte[carta]=1;
				//printf("descartou");
				nJog++;
				if(nJog>=j)nJog=0;
			}
			//printf("y - %d %d - y\n",numJog[nJog],nJog);
			
			
		}
		
		int maior=-1;
		for(int i=0;i<j;i++){
			//printf("x - %d %d - x\n",numJog[i],i);
			if(numJog[i]>maior){
				maior=numJog[i];
			}
		}
		printf("%d",maior);
		for(int i=0;i<j;i++){
			if(numJog[i]==maior){
				printf(" %d",i+1);
			}
		}
		printf("\n");
	}
	

	return 0;
}