#include<stdio.h>
#include<stdlib.h>
#include<math.h>




int main(){
	int l=0,c=0,r1=0,r2=0;
	while(1){
		
		scanf("%d %d %d %d",&l,&c,&r1,&r2);
		if(l==0&&c==0&&r1==0&&r2==0)break;
		
		if(pow(l-r2-r1,2)+pow(c-r1-r2,2)>=pow(r1+r2,2)&&r1*2<=c&&r1*2<=l&&r2*2<=c&&r2*2<=l)printf("S\n");
		else printf("N\n");
	}
	return 0;
}
