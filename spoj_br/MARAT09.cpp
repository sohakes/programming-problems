#include<stdio.h>

int main(){
	int a, b,t1,t2, flag=0;
	scanf("%d %d",&a,&b);
	for(int i=0;i<a;i++){
		if(i==0){
			scanf("%d",&t2);
		}else{
			t1=t2;
			scanf("%d",&t2);
			if(t2-t1>b){
				flag=1;
			}
		}
	}
	t1=t2;
	t2=42195;
	if(t2-t1>b){
				flag=1;
			}
	if(flag==0){
		printf("S");
	}else{
		printf("N");
	}
	return 0;
}
