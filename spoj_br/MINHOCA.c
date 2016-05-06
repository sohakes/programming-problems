#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>



int main(){
	int N=0,M=0,i=0,j=0,mat[111][111];
	long col[111],l[111],maior=0;
	scanf("%d %d",&N,&M);
	for(i=0;i<110;i++){
		col[i]=0;l[i]=0;
	}
	for(i=0;i<N;i++){
		j=0;
		for(j;j<M;j++){
			scanf("%d",&mat[i][j]);
			col[j]+=mat[i][j];
			l[i]+=mat[i][j];
		}
		//scanf("\n");
	}
	i=0;
	for(i;i<101;i++){
		if(col[i]>maior)maior=col[i];
		if(l[i]>maior)maior=l[i];
	}
	printf("%ld\n",maior);
	
	return 0;
}
