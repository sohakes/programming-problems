#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    int n;
    int cont;
    int aux = 0;
    scanf("%d", &n);
    if(n < 0) n *= -1;
    if((n == 0)||(n == 1)) aux++;
    
    if(n <= 2147483647){
        for(cont = 2; cont <= sqrt(n); cont++){
            if((n % cont) == 0) aux++;
        }
    }
    if(aux > 0) printf("nao");
    else printf("sim");
    return 0;
}