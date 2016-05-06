#define maxar 5000
#define maxver 110
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<stdlib.h>
#include<map>
#include<queue>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main () {
	int fila[2000];
	int ini, fim;
	int arv[111][111];
	int a, b, n, cid[111],n2;
	int teste=0;
	while(true){
		
		ini=3; fim=3;
		teste++;
		cin>>n;
		for (int i=0;i<n;i++){
			cid[i]=0;
			fila[i]=0;
			for (int j=0;j<n;j++)
				arv[i][j]=0;
				
		}
		if(n==0)break;
		cout<<"Teste "<<teste<<"\n";
		if(n==1){
			cout<<1<<endl<<endl;
			continue;
		}
		n2=n;
		
		for (int i=0;i<n-1;i++){
			cin>>a>>b;
			a--;
			b--;
			cid[a]++;
			cid[b]++;
			arv[a][b]=1;
			arv[b][a]=1;
		}
		
	//qsort (cid, n, sizeof(int), compare);
		//getchar();getchar();
		for (int i=0;i<n;i++){
			if(cid[i]==1){
				fila[ini++]=i;
			//	getchar();getchar();
			}//else break;
		}
		
		while(ini!=fim){
			//if(n2==1)break;
			//getchar();getchar();
			if(ini>2000)break;
			a=fila[fim++];
			//getchar();getchar();
			//n2--;
			for (int i=0;i<n;i++){
				if(arv[a][i]==1){
					cid[i]--;
					if(cid[i]==1)fila[ini++]=i;
					arv[a][i]=0;
					arv[i][a]=0;
				}
			}
		}
		if(ini>2000)continue;
		//getchar();getchar();
		//cout<<"\nini: "<<ini<<"\nfim: "<<fim<<endl;

		cout<<fila[ini-1]+1<<endl;

		cout<<"\n";

	}
	
	
	
	
	
	

	return 0;
}