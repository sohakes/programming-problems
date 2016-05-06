#include<stdio.h>
#include<stdlib.h>


int main(){
	int t1=0,t2=0, s=0,p=0,i=0;
	scanf("%d",&p);
	for(i;i<p;i++){
		scanf("%d",&t2);
		if(i!=0)
			if(t2-t1>=10)s+=10;
			else s+=t2-t1;
		t1=t2;
	}
	s+=10;
	printf("%d",s);
	
	return 0;
}
