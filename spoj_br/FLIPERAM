#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}

int main(){
	int N=0,M=0,i=0,vet[10010];
	scanf("%d %d",&N,&M);
	for(i;i<N;i++){
		scanf("%d",&vet[i]);
	}
	qsort(vet,N,sizeof(int),compare);
	i=0;
	for(i;i<M;i++)printf("%d\n",vet[i]);
	
	return 0;
}
