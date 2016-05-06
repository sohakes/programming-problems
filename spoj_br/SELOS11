#include <math.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>

using namespace std;

int main () {
	long long n;
	cin>>n;
	if(n%2==0){
		cout<<"S";
		return 0;
	}
	for(int i=3;i<sqrt(n);i+=2){
		if(n%i==0){
			cout<<"S";
			return 0;
		}	
	}
	cout<<"N";
	return 0;
}
