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

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}


int main () {
	
	int teste=0;
	int a, b;
	int n;
	int x[MAX], y[MAX];
	while(1){
		teste++;

		scanf("%d",&n);
		if(n==0)break;
		for(int i=0;i<n;i++){
			scanf("%d %d", &a, &b);
			x[i]=a;
			y[i]=b;
			
		}
		qsort (x, n, sizeof(int), compare);
		qsort (y, n, sizeof(int), compare);
		
		printf("Teste %d\n%d %d\n\n",teste, x[n/2], y[n/2]);
	}
	
}







