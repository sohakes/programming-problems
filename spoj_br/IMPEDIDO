#include<stdio.h>
#include<stdlib.h>

int main(){
	int ultimo=0, penultimo=0, aux=0, lala=0;
	int atacante=0;
	int a=0, d=0, i=0, j=0;
	while(1){
	ultimo=0;
	penultimo=0;
	aux=0;
	lala=0;
	atacante=0;
	a=0;
	d=0;
	i=0;
	j=0;
		scanf("%d %d", &a, &d);
		if(a==0&&d==0)
			break;
		for(i=0;i<a;i++){
			scanf("%d ",&lala);
			if(i==0||(i>0&&lala<atacante))
				atacante=lala;
		}
		for(i=0;i<d;i++){
			scanf("%d",&lala);
			if(i==0)ultimo=lala;
			if(i==1)penultimo=lala;

			if(i>0&&lala<=ultimo){
				aux=ultimo;
				ultimo=lala;
				penultimo=aux;
			}else if(i>0&&lala<penultimo)
				penultimo=lala;
		}
		//printf("ultimo %d, penultimo %d, atacante %d\n",ultimo,penultimo,atacante);
		if(atacante<penultimo)
			printf("Y\n");
		else
			printf("N\n");




	}
	return 0;
}