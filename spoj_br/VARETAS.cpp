#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,tv,nv, nt;
	while(1){
		scanf("%d",&n);
		if(n==0)break;
		nt=0;
		for(int i=0;i<n;i++){
			scanf("%d %d",&tv,&nv);
			nt+=nv/2;
			
		}
		printf("%d\n",nt/2);
	}

	return 0;	
}