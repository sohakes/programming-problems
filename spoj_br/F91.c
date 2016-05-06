#include<stdio.h>
#include<stdlib.h>

int f91(int N){
	if(N>100)
		return N-10;
	return f91(f91(N+11));
}

int main(){
	int N=0;
	while(1==1){
		scanf("%d", &N);
		if(N==0)break;
		printf("f91(%d) = %d\n",N,f91(N));
	}
	return 0;
}
