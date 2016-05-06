
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include<map>
#include<cmath>

using namespace std;

typedef struct pessoa{
	int pont;
	char nome[20];
} pessoa;

int compare (const void * a, const void * b)
{
  int x= ( (*(pessoa*)b).pont - (*(pessoa*)a).pont);
  if(x!=0)return x;
  return strcmp((*(pessoa*)a).nome , (*(pessoa*)b).nome);
}

int main () {
	int n=0;
	int atual=0;
	int maior, menor, x,teste=0;
	pessoa vpessoa[1100];
	while(true){
		teste++;
		cin>>n;
		if(n==0)break;
		//cout<<n;
		
		cout<<"Teste "<<teste<<"\n";
		for(int i=0;i<n;i++){
			cin>>vpessoa[i].nome;
			cin>>x;
			vpessoa[i].pont=x;
			maior=x;menor=x;
			for(int j=0;j<11;j++){
				cin>>x;
				if(x>maior)maior=x;
				if(x<menor)menor=x;
				vpessoa[i].pont+=x;
			}
			vpessoa[i].pont-=maior;
			vpessoa[i].pont-=menor;
			//vpessoa[i].pont/=10;
		}
		qsort (vpessoa, n, sizeof(pessoa), compare);
		atual=0;	
		for(int i=0;i<n;i++){
			if(i!=0){
				if(vpessoa[i].pont!=vpessoa[i-1].pont){
					atual=i;
				}
			}
			cout<<atual+1<<" "<<vpessoa[i].pont<<" "<<vpessoa[i].nome<<"\n";
		}
		cout<<"\n";
		
	}
}