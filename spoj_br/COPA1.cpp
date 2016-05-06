
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include<stack>


#include<cmath>

using namespace std;



int main () {
	int jogos[15];
	int a, b;
	for(int i = 0; i<8;i++){
		cin>>a>>b;
		if(a>b)
			jogos[i]=i*2;
		else
			jogos[i]=i*2+1;
		
	}
	int x=0;
	for(int i = 8; i<15;i++){
		cin>>a>>b;
		if(a>b)
			jogos[i]=jogos[x];
		else
			jogos[i]=jogos[x+1];
		x+=2;
		
	}
	cout<<(char)(jogos[14]+'A');
	
	
	
	return 0;
	
}