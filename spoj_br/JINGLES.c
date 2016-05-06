#include<stdio.h>
#include<stdlib.h>

int main(){
	int certo=0,i=0,atual=0,flag=0;
	char jing [250];
	while(1){
		i=0;atual=0;certo=0;
		scanf("%s",jing);
		if(jing[i]=='*')break;
		if(flag==1) printf("\n");
		for(i;i<250;i++){
			if(jing[i]=='\0')break;
			
			if(jing[i]=='/'){
				if(atual==64)
					certo++;
				atual=0;
				//continue;
			}
			else if(jing[i]=='W')atual+=64;
			else if(jing[i]=='H')atual+=32;
			else if(jing[i]=='Q')atual+=16;
			else if(jing[i]=='E')atual+=8;
			else if(jing[i]=='S')atual+=4;
			else if(jing[i]=='T')atual+=2;
			else if(jing[i]=='X')atual+=1;
		}		
		printf("%d",certo);
		flag=1;
		i=0;
		for(i;i<230;i++) jing[i]='\0';
	}
	return 0;
}
