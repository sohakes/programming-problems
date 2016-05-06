#include<stdio.h>
#include<stdlib.h>

int main(){
	int teste=0,x1=0,y1=0,x2=0,y2=0,i=0,n=0,x=0,y=0,certos=0;
	while(1){
		teste++;
		x1=0;y1=0;x2=0;y2=0;i=0;n=0;x=0;y=0;certos=0;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		
		if(x1==0&&y2==0&&y1==0&&x2==0)break;
		scanf("%d",&n);
		for(i;i<n;i++){
			scanf("%d %d",&x,&y);
			if(x>=x1&&x<=x2&&y>=y2&&y<=y1)certos++;
		}
		
		printf("Teste %d\n%d\n\n",teste,certos);
	}
	return 0;
}
