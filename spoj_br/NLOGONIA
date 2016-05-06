#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,dx,dy,x,y;
	while(1){
		scanf("%d",&n);
		if(n==0)break;
		scanf("%d %d",&dx,&dy);
		for(int i=0;i<n;i++){
			scanf("%d %d",&x,&y);
			if(x>dx&&y>dy)
				printf("NE\n");
			else if(x>dx&&y<dy)
				printf("SE\n");
			else if(x<dx&&y<dy)
				printf("SO\n");
			else if(x<dx&&y>dy)
				printf("NO\n");
			else
				printf("divisa\n");
		}
	}

	return 0;	
}