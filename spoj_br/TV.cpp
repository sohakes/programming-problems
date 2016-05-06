
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>

using namespace std;

int main () {
	int m, n, x, y, xa, ya, teste=0;
	int mat[1001][1001];
	while(true){
		
		scanf("%d %d", &m, &n);
		if(m==0&&n==0){
			break;
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%d", &mat[i][j]);
			}		
		}
		teste++;
		printf("Teste %d\n", teste);
		xa=0;
		ya=0;
		while(true){
			scanf("%d %d", &x, &y);
			if(x==0&&y==0){
				break;
			}
			xa+=y;
			ya-=x;
		}
		if(xa<0){
			xa=m-((xa*(-1))%m);
		}else{
			xa=xa%m;
		}
		if(ya<0){
			ya=n-((ya*(-1))%n);
		}else{
			ya=ya%n;
		}
		int flag=0, flag2=0;
		for(int i=xa;true;i++){
			if(i==m)i=0;
			if(flag==m)break;
			flag++;
			flag2=0;
			for(int j=ya;true;j++){
				flag2++;
				if(j==n)j=0;
				
				printf("%d ",mat[i][j]);
				if(flag2==n)break;
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}