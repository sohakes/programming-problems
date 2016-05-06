#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>
#include<cmath>

using namespace std;

int main () {
	int n, m,a,b,menor=-1, menori=-1,atual,natual;
	char op;
	int vet[100010];
	cin>>n>>m;
	//getchar();getchar();
	for(int i=0;i<n;i++){
		vet[i]=i;
	}
	//getchar();getchar();
	
	for(int i=0;i<m;i++){
		while((op=getchar())=='\n');
		//getchar();getchar();getchar();getchar();
		scanf("%d %d", &a,&b);
		a--;
		b--;
		//getchar();getchar();getchar();getchar();
		if(op=='F'){
			while(vet[a]!=a)a=vet[a];
while(vet[b]!=b)b=vet[b];
			vet[b]=a;
		}else{
			//Sobe para o pai
			int temp = a;
			
			while(vet[a]!=a)a=vet[a];
			while(vet[b]!=b)b=vet[b];
			if(a==b){
				cout<<"S\n";
			}else
				cout<<"N\n";
		}
	}
	//cout<<menori+1<<endl;
	
	

}