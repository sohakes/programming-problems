
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>
#include<cmath>

using namespace std;

int main () {
	int a,b,c,x,y,z,d=0,e=0,f=0,maior=0;
	cin>>a>>b>>c;
	cin>>x>>y>>z;
	for(int i=-1;i<2;i+=2)
		for(int j=-1;j<2;j+=2)
			for(int k=-1;k<2;k+=2)
				if(pow((x/a),i)*pow((y/b),j)*pow((z/c),k)>maior)maior=pow((x/a),i)*pow((y/b),j)*pow((z/c),k);
	
	cout<<maior;
	
	
	return 0;
}