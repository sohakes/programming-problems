
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>

using namespace std;

int main () {
	int n=0;
	int m1[100][100],m2[100][100];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>m1[i][j];		
		}	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>m2[i][j];	
		}	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<m2[i][j]+m1[i][j]<<" ";		
		}
		if(i!=n-1)cout<<"\n";	
	}	
}