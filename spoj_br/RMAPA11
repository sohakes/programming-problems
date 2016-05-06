#define maxar 124800
#define maxver 5000
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<stdlib.h>
#include<map>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( ((int*)a)[2] - ((int*)b)[2] );
}

/*	Algoritmo bonitinho, funciona criando um vetor "arv" que guarda as arestas que
	precisam ser colocadas na nova árvore. Pra pegar essas arestas, ele simplemente
	ordena a entrada por custo (recebe a entrada em arestas), e então sempre pega a
	aresta de menor custo, e adiciona ela na árvore se tiver um vértice na árvore e um
	que não tá. Caso uma aresta tenha seus dois vértices na árvore, ele ignora, caso 
	não tenha nenhum dos dois, aí preciso marcar que preciso passar pela árvore denovo
	
	Tem umas coisas inúteis, e pra pegar a aresta de menor peso também fiquei resetando o 
	i, tem jeito melhor
*/

int main () {
	//Isso vai receber as arestas
	int arestas[maxar][3];

	//Na arvore
	int arv[maxver];

	int x,y,z;
	int n, m;
	int it=0;
	int k=0;
	int teste=0;
	int soma=0;

		//inicializa arv, adj, arestas

		cin>>n>>m;
		for(int i=0;i<=n;i++){
			arv[i]=0;
		}
		for(int i=0;i<=n;i++){
		arestas[i][2]=0;
			for(int j=0;j<2;j++){
				arestas[i][j]=0;
			}
		}

		for(int i =0;i<m;i++){
			cin>>x>>y>>z;
			arestas[i][0]=x;
			arestas[i][1]=y;
			arestas[i][2]=z;

		}
		qsort (arestas, m, 3*sizeof(int), compare);
		arv[arestas[0][0]]=1;
		k=1;
		while(k==1){
			k=0;
			for(int i =0;i<m;i++){
				if((arv[arestas[i][0]]==1&&arv[arestas[i][1]]==0)||(arv[arestas[i][0]]==0&&arv[arestas[i][1]]==1)){
					arv[arestas[i][1]]=1;
					arv[arestas[i][0]]=1;
					soma+=arestas[i][2];
					i=0;
				}else if(arv[arestas[i][0]]==0&&arv[arestas[i][1]]==0){
					k=1;
				}
			}
		}
		cout<<soma;

	
	
	
	
	
	
	

	return 0;
}