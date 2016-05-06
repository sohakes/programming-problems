#include<stdio.h>
#include<stdlib.h>

int main(){
	int h1=0,m1=0,h2=0,m2=0,min1=0,min2=0,res=0,dia=24*60;
	while(1==1){
		h1=0;m1=0;h2=0;m2=0;min1=0;min2=0;res=0;
		scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
		if(h1==0&&m1==0&&h2==0&&m2==0) break;
		min1=h1*60+m1;
		min2=h2*60+m2;
		if(min1>min2){
			res=dia-min1+min2;
		}else{
			res=min2-min1;
		}
		printf("%d\n",res);
	}
	return 0;
}
