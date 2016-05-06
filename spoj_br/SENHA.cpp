#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>

using namespace std;

int main () {
	int n, flag, flag2, teste=0;
	char c;
	int pos[6][2], res[6], letras[5][2];
	while(true){
		scanf("%d", &n);
		if(n==0)break;
		teste++;
		printf("Teste %d\n", teste);
		
		flag=0;
		flag2=0;
		for(int j=0;j<6;j++){
				res[j]=-1;
			}
		for(int i=0;i<n;i++){
			/*for(int j=0;j<12;j++){
				pos[j/2][j%2]=-1;
			}*/
			
			for(int j=0;j<10;j++){
				scanf("%d", &letras[j/2][j%2]);
			}
			
			for(int j=0;j<6;j++){
				getchar();
				c=getchar();
				//printf("x%cx ",c);
				c=c-'A';
				
				//printf("x%dx ",(int)c);
				//if(flag==6)continue;
				if(flag2==0){
					pos[j][0]=letras[c][0];
					pos[j][1]=letras[c][1];
				}else{
					if(pos[j][0]==letras[c][0]&&pos[j][1]!=letras[c][1]){
						//flag++;
						res[j]=pos[j][0];
					}else if(pos[j][0]==letras[c][1]&&pos[j][1]!=letras[c][0]){
						//flag++;
						res[j]=pos[j][0];
					}else if(pos[j][1]==letras[c][0]&&pos[j][0]!=letras[c][1]){
						//flag++;
						res[j]=pos[j][1];
					}else if(pos[j][1]==letras[c][1]&&pos[j][0]!=letras[c][0]){
						//flag++;
						res[j]=pos[j][1];
					}
				}
				
			}	
			flag2=1;		
		}
		for(int j=0;j<6;j++){
				printf("%d ", res[j]);
			}
		printf("\n\n");
	}

	return 0;
}
