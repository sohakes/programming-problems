
#include <stdio.h>
#include<stdlib.h>
#include <iostream>


using namespace std;



int main () {
	int t,a,b;
	int ai=0,bi=0;
	scanf("%d %d %d",&t,&a,&b);
	if(a<b)bi=1;
	else ai=1;
	while(true){
		if(abs(ai*a-bi*b)==t){
			if(ai*a>bi*b)
				printf("%d",ai*a);
			else
				printf("%d",bi*b);
			break;
		}
		
		if(ai*a>bi*b)bi++;
		else if(ai*a<bi*b)ai++;
		else if(a>b)bi++;
		else ai++;
		
	}
	
	return 0;
}