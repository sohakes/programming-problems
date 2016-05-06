#include<stdio.h>
#include<stdlib.h>

int main(){
	char tel[40];
	char telf[40];
	int i = 0;
	while(scanf("%s",tel)!=EOF){
		i=0;
		while(1){
			
			if(tel[i]=='A'||tel[i]=='B'||tel[i]=='C')telf[i]='2';
			else if(tel[i]=='D'||tel[i]=='E'||tel[i]=='F')telf[i]='3';
			else if(tel[i]=='G'||tel[i]=='H'||tel[i]=='I')telf[i]='4';
			else if(tel[i]=='J'||tel[i]=='K'||tel[i]=='L')telf[i]='5';
			else if(tel[i]=='O'||tel[i]=='N'||tel[i]=='M')telf[i]='6';
			else if(tel[i]=='P'||tel[i]=='Q'||tel[i]=='R'||tel[i]=='S')telf[i]='7';
			else if(tel[i]=='T'||tel[i]=='U'||tel[i]=='V')telf[i]='8';
			else if(tel[i]=='Z'||tel[i]=='Y'||tel[i]=='X'||tel[i]=='W')telf[i]='9';
			else if(tel[i]=='1'||tel[i]=='0'||tel[i]=='-')telf[i]=tel[i];
			else break;
			i++;
		}
		telf[i]='\0';
		printf("%s\n",telf);
	}
	return 0;
}
