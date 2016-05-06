#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include<map>
#include<cmath>

using namespace std;



int main () {
	long long n,p,q,r,s,x,y,i,j;
	cin>>n;
	cin>>p>>q>>r>>s>>x>>y;
	cin>>i>>j;
	long long res=0;
	for(int k=1;k<=n;k++){
		res+=((p*i+q*k)%x)*((r*k+s*j)%y);
	}
	cout<<res;
}
