#define maxar 5000
#define maxver 110
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include<stdlib.h>
#include<math.h>
#include<map>

using namespace std;



int main () {
	//largura, altura, profundidade, raio
	double l,a,p,r,d,l1,a1,p1,r1;
	cin>>l>>a>>p>>r;
	l1=l/2;
	a1=a/2;
	p1=p/2;
	r1=r/2;
	d = sqrt(pow((a - a1), 2) + pow((p - p1),2) + pow((l - l1), 2));
	if(d<=r)cout<<"S";
	else cout<<"N";
	

	return 0;
}