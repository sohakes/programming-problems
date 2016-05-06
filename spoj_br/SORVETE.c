#include <stdlib.h>
#include <stdio.h>

int comp(const void * a, const void * b){
int * a1 = (int*)a;
int * b1 = (int*)b;
if((a1)[0]<(b1)[0])return -1; 
if((a1)[0]>(b1)[0])return 1;
return 0;


}

int main(){
int comprimento =0, sorveteiros = 0;
int intervalos[123450][2];
int x = 0;
scanf("%d %d", &comprimento, &sorveteiros);
//printf("%d %d", comprimento, sorveteiros);
while(comprimento!=0&&sorveteiros!=0){
int i = 0;
x++;
for(i = 0;i<sorveteiros;i++){
scanf("%d %d", &intervalos[i][0], &intervalos[i][1]);

}

qsort(intervalos, sorveteiros, sizeof(intervalos[0]),comp);
printf("Teste %d\n", x);
/* for(i = 0;i<sorveteiros;i++){
          printf("%d %d\n", intervalos[i][0], intervalos[i][1]);
          }*/
int inicio = intervalos[0][0], fim = intervalos[0][1];
for(i = 0;i<sorveteiros;i++){
if(intervalos[i][0]<=fim&&intervalos[i][1]>fim){
fim=intervalos[i][1];
}else if(intervalos[i][0]>fim){
printf("%d %d\n", inicio, fim);
inicio = intervalos[i][0];
fim = intervalos[i][1];
}
}
printf("%d %d\n\n", inicio, fim);


scanf("%d %d", &comprimento, &sorveteiros);
}
return 0;

}
