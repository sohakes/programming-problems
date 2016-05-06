#include<stdio.h>
#include<stdlib.h>

int main(){
	unsigned long int horan, centesimos = 0, aux=0;
	while(scanf("%lu",&horan)!=EOF){
		centesimos=0;aux=0;
		aux = (horan/1000000);
		centesimos += aux*360000;
		horan = horan - aux * 1000000;

		aux =(horan/10000);
		centesimos+=aux*6000;
		horan -= aux*10000;

		aux = horan/100;
		centesimos+=aux*100;
		horan -=aux*100;

		centesimos+=horan; 
		
		centesimos/=0.864;

		printf("%07lu\n", centesimos);




	}
	return 0;
}