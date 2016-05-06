
#include <stdio.h>
#include<stdlib.h>
#include <iostream>


using namespace std;



int main () {
	int p, r,n,ordem,x, teste=0;
	int fila[110];
	while(true){
		teste++;
		cin>>p>>r;
		if(p==0)break;
		for(int i=0;i<p;i++){
			scanf("%d",&fila[i]);
		}
		fila[p]=-1;
		for(int j=0;j<r;j++){
			scanf("%d %d ",&n,&ordem);
			for(int i=0;i<p;i++){
				if(fila[i]!=-1){
					scanf("%d",&x);
					if(x!=ordem){
						int k;
						for(k=i;k<p;k++){
							if(fila[k]==-1)break;
							fila[k]=fila[k+1];
						}
						
						i--;
					}
				}
			}
		}
		printf("Teste %d\n",teste);
		//cout<<"Teste "<<teste<<"\n";
		for(int i=0;i<p;i++){
			if(fila[i]!=-1){
				printf("%d\n",fila[i]);
				//cout<<fila[i]<<"\n";
				break;}
		}
		cout<<"\n";

		
	}
	return 0;
}