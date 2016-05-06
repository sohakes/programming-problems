#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include<map>
#include<queue>
#include<cmath>
#define MAX 1001

using namespace std;




int main () {
	
	int n;
	int a, apas;
	int dif;
	int quebra=1;
	int flag=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d", &a);
		if(flag!=0){
			if(flag==1){dif=apas-a;flag++;}
			else{
				if(dif!=apas-a){
					//printf("x%d %d %dx\n", apas,a,dif);
					quebra++;
					flag=1;
				}
			}
		}else flag++;
		apas=a;
	}
	printf("%d", quebra);
	
}







