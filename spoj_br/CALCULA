#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


int main(){
	int a=0,b=0,n=0,i=0,teste=0,j=0,res=0,num=0;
	char na[2000], x='a';
	while(1){
		teste++;
		a=0;b=0;n=0;i=0;res=0;num=0;
		for(i;i<2000;i++)na[i]='\0';
		i=0;
		scanf("%d",&n);
		if(n==0)break;
		printf("Teste %d\n",teste);
		scanf("%s",na);
		j=-1;
		x='+';
		for(i;i<2000;i++){
			
			if(na[i]!='+'&&na[i]!='-'){
				if(j==-1){
					j=i;
				}
				if(na[i]=='\0'){
					if(i-j==1)num=na[j]-'0';
					else if(i-j==2)num=(na[j]-'0')*10+na[j+1]-'0';
					else if(i-j==3)num=(na[j]-'0')*100+(na[j+1]-'0')*10+na[j+2]-'0';
					if(x=='+')res+=num;
					if(x=='-')res-=num;
					break;
				}
			}else{
				if(i-j==1)num=na[j]-'0';
				else if(i-j==2)num=(na[j]-'0')*10+na[j+1]-'0';
				else if(i-j==3)num=(na[j]-'0')*100+(na[j+1]-'0')*10+na[j+2]-'0';
				if(x=='+')res+=num;
				if(x=='-')res-=num;
				x=na[i];
				j=-1;
			}
			
		}
		printf("%d\n\n",res);
	}

	
	return 0;
}
