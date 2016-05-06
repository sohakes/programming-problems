	
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include<map>
#include<cmath>

using namespace std;



int main () {
	int n;
	long long cima=1, baixo=1;
	long double res=1;
	double a=0;
	char op;
	cin>>n;
	for(int i =0;i<n;i++){
		scanf("%lf %c", &a, &op);
		if(op=='*')
			res*=a;
		else if(op=='/')
			res/=a;
	}
	printf("%.0Lf",res);
}