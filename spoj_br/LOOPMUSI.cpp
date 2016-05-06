#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,vet[10010], alto, picos;

	while(1){
		scanf("%d",&n);
		if(n==0)break;
		alto=-1;
		picos=0;
		for(int i=0;i<n;i++){
			scanf("%d",&vet[i]);
			if(i!=0){
				if(vet[i-1]>vet[i]){
					if(alto==1){
						picos++;
					}
					alto=0;
				}else if(vet[i-1]<vet[i]){
					if(alto==0){
						picos++;
					}
					alto=1;
				}else{
					alto=-1;
				}
			}
			
		}
		if(vet[n-1]>vet[n-2]&&vet[n-1]>vet[0]||vet[n-1]<vet[n-2]&&vet[n-1]<vet[0])picos++;
		if(vet[0]>vet[n-1]&&vet[0]>vet[1]||vet[0]<vet[n-1]&&vet[0]<vet[1])picos++;
		printf("%d\n",picos);
	}

	return 0;	
}