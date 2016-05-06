#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
	int i=0,teste=0,p=0,n=0;
	while(1){
		teste++;
		n=0;i=1;
		scanf("%d",&n);
		if(n==0)break;
		printf("Teste %d\n",teste);
		for(i;i<n+1;i++){
			scanf("%d",&p);
			if(p==i){
				printf("%d\n\n",i);
				//break;
			}
		}
	}
	return 0;
}
