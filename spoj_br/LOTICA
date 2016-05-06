#include<stdio.h>
#include<stdlib.h>

int main(){

	int i=0,n=0,a=0,b=0,c=0,d=0,e=0;
	while(1){
		i=0;n=0;a=0;b=0;c=0;d=0;e=0;
		scanf("%d",&n);
		if(n==0) break;
		
		for(i;i<n;i++){
			scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
			if(a<=127&&b>127&&c>127&&d>127&&e>127)printf("A\n");
			else if(a>127&&b<=127&&c>127&&d>127&&e>127)printf("B\n");
			else if(a>127&&b>127&&c<=127&&d>127&&e>127)printf("C\n");
			else if(a>127&&b>127&&c>127&&d<=127&&e>127)printf("D\n");
			else if(a>127&&b>127&&c>127&&d>127&&e<=127)printf("E\n");
			else printf("*\n");
		}
	}
	return 0;
}
