#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isprime(int n){
	int i =2;
	if(n==1||n==2||n==3||n==5)return 1;
	for(i;i<=n/2;i++){
		if(n%i==0)return 0;
	}
	return 1;
}

int main(){

	int i=0,soma=0,flag=0;
	char palavra[30];
	while(scanf("%s",palavra)!=EOF){
		i=0;
		soma=0;
		if(flag==1)printf("\n");
		for(i;i<30;i++){
			if(palavra[i]=='\0')break;
			//printf("%d",palavra[i]);
			if(palavra[i]>='A'&&palavra[i]<'a')
				soma+=palavra[i]-'A'+27;
			else if(palavra[i]>='a')
				soma+=palavra[i]-'a'+1;
			//printf("%d",soma);
		}
		if(isprime(soma)==1)
			printf("It is a prime word.");
		else
			printf("It is not a prime word.");
		flag=1;
		i=0;
		for(i;i<29;i++) palavra[i]='\0';
	}
	return 0;
}
