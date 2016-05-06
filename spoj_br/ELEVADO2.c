#include<stdio.h>
#include<stdlib.h>

int main(){
	int l=0, e=0, s=0, c=0, p=0,i=0,flag=0;
	scanf("%d %d", &l,&c);
	for(i;i<l;i++){
		scanf("%d %d",&s,&e);
		p+=e;
		p-=s;
		if(p>c)
			flag=1;
	}
	if(flag==1)
		printf("S");
	else
		printf("N");
	return 0;
}
