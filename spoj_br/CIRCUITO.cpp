#include<stdio.h>
#include<stdlib.h>
#include<map>

using namespace std;

int main(){
	int p,n,c, soma, vet[1010], at;


	while(1){

		scanf("%d %d %d",&p, &n, &c);
		if(n==0)break;
		soma=0;
		for(int j=0;j<p;j++)vet[j]=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<p;j++){
				scanf("%d",&at);
				if(at==1){
					vet[j]++;
				}else{
					if(vet[j]>=c)
						soma++;
					vet[j]=0;
				}			
			}			
		}
		for(int j=0;j<p;j++){
			if(vet[j]>=c)soma++;
		}	
		//tem que passar por tudo ver o que é maior que c denovo
		printf("%d\n",soma);
	}

	return 0;	
}