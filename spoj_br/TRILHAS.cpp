
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include<stack>
#include<queue>

#include<cmath>
#include<math.h>
using namespace std;



int main () {
	int n, m;
	int at,atant, esfor1, esfor2,maior=-1, maiori=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m;
		at=0;
		atant=0;
		esfor1=0;
		esfor2=0;
		for(int j=0;j<m;j++){
			atant=at;
			scanf("%d",&at);
			if(j!=0){
				if(at>atant){
					esfor1+=at-atant;
				}else{
					esfor2+=atant-at;
				}
			}
			
		}
		//printf("x%d %d %d %dx\n",i,esfor1,esfor2,maior);
		if(esfor2<esfor1)esfor1=esfor2;
		if(maior>esfor1||maior==-1){
			maior=esfor1;
			maiori=i;
		}
	
	
	}
	cout<<maiori;
	return 0;
	
}