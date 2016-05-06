#include<stdio.h>
#include<stdlib.h>

int main(){
	int mat[500][500],e=0,l=0,i=0,j=0,teste=0,a=0,b=0,est[500],ini=0,fim=0,fila[500],est2[500],flag=0,estacoes=0;
	while(1){
		e=0;l=0;i=0;j=0;a=0;b=0;ini=0;fim=0;flag=0;estacoes=0;
		teste++;
		for(i=0;i<500;i++){
			for(j=0;j<500;j++){
				mat[i][j]=0;
			}
			est[i]=0;
			est2[i]=0;
			fila[i]=0;
		//	printf("%d %d\n",i,est[i]);
		}
		scanf("%d %d",&e,&l);
		if(e==0)break;
		for(i=0;i<l;i++){
			scanf("%d %d",&a,&b);
			mat[a][b]=1;
			mat[b][a]=1;
			if(est2[a]==0)estacoes++;
			
			est2[a]=1;
			if(est2[b]==0)estacoes++;
			est2[b]=1;
		}
		if(estacoes!=e){
			printf("Teste %d\nfalha\n\n",teste);
			//printf("lol");
			continue;
		}
		fila[ini]=a;
		fim++;
		est[a]=1;
		while(ini!=fim){
			for(i=1;i<500;i++){
				if(mat[fila[ini]][i]==1&&est[i]==0){
					est[i]=1;
					fila[fim]=i;
					fim++;
					//printf("%d - %d %d\n",i,est[i],est2[i]);
				}
			}
			est[fila[ini]]=1;
			ini++;
		}
		//for(i=1;i<500;i++)printf("%d %d\n",i,est[i]);
		for(i=1;i<500;i++){
			if(est[i]!=est2[i]){
				
				flag=1;
				//break;
			}
			//printf("%d - %d %d\n",i,est[i],est2[i]);
			
		}
		
		if(flag==1)printf("Teste %d\nfalha\n\n",teste);
		else printf("Teste %d\nnormal\n\n",teste);
	}
	return 0;
}
