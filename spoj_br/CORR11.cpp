	
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include<map>
#include<cmath>

using namespace std;


typedef struct{
	int num;
	long long tempo;
}carro;


int compare (const void * a, const void * b)
{
  return ( ((carro*)a)->tempo - ((carro*)b)->tempo );
}



int main () {
	int n, m, temp;
	carro carros[100];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		carros[i].num=i+1;
		carros[i].tempo=0;
		for(int j=0;j<m;j++){
			cin>>temp;
			carros[i].tempo+=temp;
		}	
	}
	qsort (carros, n, sizeof(carro), compare);
	cout<<carros[0].num<<"\n"<<carros[1].num<<"\n"<<carros[2].num;
	
}