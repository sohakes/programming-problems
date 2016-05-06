
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>
#include<cmath>

using namespace std;

int main () {
	int n=0;
	double v[1000][2],t,menor=-1,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		a+=2000000;
		b+=2000000;
		v[i][0]=a;
		v[i][1]=b;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			t=sqrt((v[i][0]-v[j][0])*(v[i][0]-v[j][0])+(v[i][1]-v[j][1])*(v[i][1]-v[j][1]));
			if(menor==-1||t<menor)menor=t;
		}
	}
	
	printf("%.3lf",menor);
}