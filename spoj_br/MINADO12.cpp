
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>
#include<cmath>

using namespace std;

int main () {
	int atual,n;
	int v[50];
	cin>>n;
	cin>>v[0];
	atual=v[0];
	for(int i=1;i<n;i++){
		if(i==1){
			cin>>v[i];
			atual+=v[i];
			cout<<atual<<endl;
		}
		if(i>1){
			cin>>v[i];
			atual+=v[i];
			cout<<atual<<endl;
			atual-=v[i-2];
		}
	}
	cout<<atual<<endl;
}