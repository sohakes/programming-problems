#include<stdio.h>
#include<stdlib.h>

int main(){
	int n=0, i=0,x=0,y=0,u=0,v=0,mx=0,my=0,mu=0,mv=0,teste=0;
	while(1){
		n=0; i=0;x=0;y=0;u=0;v=0;mx=0;my=0;mu=0;mv=0;
		teste++;
		scanf("%d",&n);
		if(n==0)break;
		for(i;i<n;i++){
			scanf("%d %d %d %d",&x,&y,&u,&v);
			if(i==0){
				mx=x;my=y;mu=u;mv=v;		
			}else{
				if(mx<x)mx=x;
				if(my>y)my=y;
				if(mu>u)mu=u;
				if(mv<v)mv=v;
			}
		}
		printf("Teste %d\n",teste);
		if(mx>=mu||my<=mv)
			printf("nenhum\n\n");
		else
			printf("%d %d %d %d\n\n",mx,my,mu,mv);
	}
	return 0;
}
