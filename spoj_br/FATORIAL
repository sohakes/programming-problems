#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
	long long  n=0, inst=0,i=1,*vet;
	vet = malloc(1000010*sizeof(long long));
	long long  x=1,j=1;
	int flag = 0;
	//printf("abacaxi");
	for(i;i<1000001;i++){
		//printf("%d\n",i);
		j=i;
		while(j%10==0)j/=10;
		x=x*j;
		while(x%10==0)x/=10;
		x=x%10000000;
		//printf("%lld - %lld\n",i,x);
		vet[i]=x;
	}
	i=80;
	j=30;
	
	/*for(i;i<200;i++){
	//printf("tahdah");
	//printf("%ld - %ld\n",vet[i],vet[j]);
		if(vet[i]%10==vet[j]%10){
			//printf("tahdah");
			if(j<=50){
				j++;
			}else{
				printf("\n\n--%d--\n\n",i);
				break;
			}
		}else{
			j=30;
		}
	}
	printf("lol");*/
	while(scanf("%lld",&n)!=EOF){
		inst++;
		
		printf("Instancia %lld\n%lld\n\n",inst,vet[n]%10);
	}
	return 0;
}
