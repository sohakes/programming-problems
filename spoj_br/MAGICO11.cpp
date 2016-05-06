
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>
#include<cmath>

using namespace std;

int main () {
	long v[1000][1000];
	int n,i,j;
	long valor=0;
	long l[1000], c[1000], d1=0,d2=0;
	//cin>>n;
	scanf("%d",&n);
	for(i=0;i<n;i++)c[i]=0;
	for(i=0;i<n;i++){
		l[i]=0;
		for(j=0;j<n;j++){
			scanf("%ld",&v[i][j]);
			//cin>>v[i][j];
			if(i==0)valor+=v[i][j];
			l[i]+=v[i][j];
			c[j]+=v[i][j];
			if(i==j)d1+=v[i][j];
			if(j==n-i-1)d2+=v[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		if(l[i]!=valor||c[i]!=valor||d1!=valor||d2!=valor){
			//cout<<i<<"-"<<l[i]<<"-"<<c[i]<<"-"<<d1<<"-"<<d2;
			//cout<<"0";
			printf("0");
			return 0;
		}
	}
	//cout<<valor;
	printf("%ld",valor);
	return 0;	

}