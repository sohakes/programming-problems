#include <stdio.h>

int restos[12345678];

int main() {

  int i, j, start;
  int maior;
  int n, arco, solucao;
  int arcos[12345];

  scanf("%d", &n);
  while (n != 0) {
    
    scanf("%d", &arcos[0]);
    maior = arcos[0];
    for (i = 1; i < n; i++) {
      scanf("%d", &arco);
      arcos[i] = arcos[i-1] + arco;
      if (maior < arco) {
	maior = arco;
      }
    }

    solucao = -1;
    for (i = arcos[n-1] / maior; i >= 3 && solucao == -1; i--) {
      if ((arcos[n-1] % i) == 0) {
	arco = arcos[n-1] / i;
	for (j = 0; j < arco; j++) {
	  restos[j] = 0;
	}
	for (j = 0; j < n; j++) {
	  restos[arcos[j] % arco]++;
	}
	for (j = 0; j < arco && solucao == -1; j++) {
	  if (restos[j] == i) {
	    solucao = n - i;
	  }
	}
      }
    }
    printf("%d\n", solucao);

    scanf("%d", &n);
  }
  return 0;
}
