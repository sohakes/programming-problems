
#include <stdio.h>
#include<stdlib.h>


int main () {
	int pedras[200],n, m,p ,d,j,i,a;
	scanf("%d %d",&n,&m);
	//printf("x%d %dx",n,m);
	for(i=0;i<=n;i++)
		pedras[i]=0;
	//	printf("x%dw\n",n);
	for(i=0;i<m;i++){
		scanf("%d %d",&p,&d);
		j=p;
		pedras[j]=1;
		//printf("x%dw\n",n);
		while(j>0){
			//printf("u%d %du\n",j,n);
			j-=d;
			if(j>0)
pedras[j]=1;
			}
		
		j=p;
		//printf("x%dw\n",n);
		while(j<=n){
			
			j+=d;
			if(j<=n)
		pedras[j]=1;
		}
	}
	for(i=1;i<=n;i++)	
		printf("%d\n",pedras[i]);
	return 0;
}
