#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>



int main(){
	int A=0, V=0, aero[111],i=0,teste=0,v1=0,v2=0,maior=0,flag=0;
	while(1){
		A=0;V=0;i=0;maior=0;flag=0;
		for(i;i<111;i++)aero[i]=0;
		teste++;
		scanf("%d %d", &A,&V);
		if(A==0)break;
		printf("Teste %d\n",teste);
		i=1;
		for(i;i<V+1;i++){
			scanf("%d %d",&v1,&v2);
			aero[v1]++;
			aero[v2]++;
			if(aero[v1]>maior)maior=aero[v1];
			if(aero[v2]>maior)maior=aero[v2];
		}
		i=1;
		for(i;i<A+1;i++){
			if(aero[i]==maior&&flag==0){
				printf("%d",i);
				flag=1;
			}else if(aero[i]==maior)printf(" %d",i);
		}
		printf("\n\n");
	}
	return 0;
}
