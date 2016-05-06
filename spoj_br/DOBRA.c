#include<stdio.h>
#include<stdlib.h>

int main(){
	int d=0,n=0;
	while(1){
		n++;
		scanf("%d",&d);
		if(d==-1)break;
		printf("Teste %d\n%d\n\n",n,(int)(pow(2,2*d)+2*pow(2,d)+1));
		
	}
	return 0;
}
