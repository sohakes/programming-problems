
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
	int teste=0;
	//comprimento,frases
	int c, f;
	//n caracteres, n desculpa
	int n, d;
	int tab[51][1001];
	int p[51], v[51];
	while(true){
		teste++;
		scanf("%d %d", &c, &f);
		
		if(f==0)break;
		printf("Teste %d\n", teste);
		
		
		for(int i=0;i<=c;i++){
			for(int j=0;j<f;j++){
				tab[j][i]=0;
			}
		}
		for(int j=1;j<=f;j++){
			scanf("%d %d", &n, &d);
			p[j]=n;
			v[j]=d;
		}
		
		for(int i=0;i<c;i++)tab[0][i]=0;
		
		for(int i=1; i<=f;i++){
			for(int j=0;j<=c;j++){
				if(j>=p[i]){
					tab[i][j]=max(tab[i-1][j],tab[i-1][j-p[i]]+v[i]);
				}else{
					tab[i][j]=tab[i-1][j];
				}
			}
		}
		cout<<tab[f][c]<<endl<<endl;
		
	}	
	return 0;
	
}