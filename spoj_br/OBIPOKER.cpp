
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include<stack>
#include<queue>

#include<cmath>
#include<math.h>
using namespace std;

int cmp(const void *a, const void *b){
	return *(int *) a - *(int *)b;
}

int main () {

	int n;
	int c[5];
	int strai;
	int eq;
	int eq4;
	int eq3;
	int eq2;
	int eq22;
	int soma;
	int c1,c2,c3,c4,c5,c6,c7;
	scanf("%d",&n);
	for(int ijk=0;ijk<n;ijk++){
		strai=1;
		eq4=0;
		eq=1;
		eq3=0;
		eq2=0;
		eq22=0;
		soma=0;
		scanf("%d %d %d %d %d", &c[0], &c[1],&c[2],&c[3],&c[4]);
		
		qsort(c,5,sizeof(int),cmp);
		/*for(int i=0;i<5;i++)
			printf("  %d  ", c[i]);*/ 
		printf("Teste %d\n", ijk+1);
		c1=c[0];
		for(int i=1;i<5;i++){
			if(c[i]!=c[i-1]+1)strai=0;
			if(c[i]==c[i-1]){
				eq++;
			}else{
				eq=1;
			}
			if(eq==4){eq4=1;c2=c[i];}
			if(eq==3){
				c3=c[i];
				c4=c[i];
				eq3=1;
				if(eq2==c[i])
					eq2=0;
			}
			if(eq==2){
				if(eq2==0){eq2=c[i];c6=eq2;}
				else {
					eq22=c[i];
						
					c5=3*eq22+2*eq2;
					
				}
			}
		}
		soma=0;
		//soma=c[0]+c[1]+c[2]+c[3]+c[4];
		if(strai==1)soma=200+c1;
		else if(eq4==1) soma=180+c2;
		else if(eq3==1&&eq2!=0) soma=160+c3;
		else if(eq3==1)soma=140+c4;
		else if(eq2!=0&&eq22!=0&&eq2!=eq22)soma=20+c5;
		else if(eq2!=0)soma=c6;
		else soma=0;
		cout<<soma<<endl<<endl;
	
			
	}	
	return 0;
	
}