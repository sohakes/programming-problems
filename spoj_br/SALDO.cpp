
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>
#include<cmath>

using namespace std;

int main () {
	int n=0;
	int a,b,x;
	int iniat, fimat, ini, fim;
	int teste=0;
	int maior, maiorat;
	while(true){
		teste++;
		cin>>n;
		if(n==0)break;
		cout<<"Teste "<<teste<<"\n";
		iniat=1;fimat=1;ini=1;fim=1;maior=0;maiorat=0;
		for(int i=1;i<=n;i++){
			cin>>a>>b;
			x=a-b;
			if(maiorat<0){
				maiorat=x;
				iniat=i;
				fimat=i;
			}
			else{
				maiorat+=x;
				fimat=i;				
			}
			if((maiorat>maior)||((maiorat!=0)&&(maiorat==maior)&&(fimat-iniat>fim-ini))){
				maior=maiorat;
				ini=iniat;
				fim=fimat;
			}	
		}
		if(fim==1&&ini==1)cout<<"nenhum\n\n";
		else cout<<ini<<" "<<fim<<"\n\n";
		
	}
}