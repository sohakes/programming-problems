#include<stdio.h>
#include<stdlib.h>

int main(){
	int vet[10010],teste=0,med=0,inter=0,i=0,j=0;
	double atual=0,menor=-1,maior=-1,mm[10010];
	while(1){
		
		med=0;atual=0;inter=0;menor=0;maior=0;
		teste++;
		scanf("%d %d", &med,&inter);
		if(med==0)break;
		for(i=0;i<med;i++){
			scanf("%d",&vet[i]);
		}
		/*for(i=0;i<med;i++){
			printf("\n-%d-\n",vet[i]);
		}*/
		
		for(i=0;i<med;i++){
			if(i<inter){
				atual+=(double)(vet[i]);
				if(i==inter-1){
					maior=atual;
					menor=atual;
					//printf("lol");
				}
			}else{
				atual+=(double)(vet[i]);
				atual-=(double)(vet[i-inter]);
				if(atual>maior)maior=atual;
				if(atual<menor)menor=atual;
			}
			//printf("maior %lf\n",maior);
					//printf("menor %lf\n",menor);
			
		}
		printf("Teste %d\n%d %d\n\n",teste,(int)(menor/(double)inter),(int)(maior/(double)inter));
	}
	return 0;
}
