#include <stdio.h>
#define MAX_ALUNOS 1000
int main()
{
  int i, indice_melhor, n;
  int turma=1,flag=0;
  struct
  {
    int codigo, media;
  } alunos[MAX_ALUNOS];
  /* le numero de alunos da primeira turma */
  scanf("%d", &n);
  while (n > 0)
    {
		flag=0;
      /* le dados dos alunos */
      for (i = 0; i < n; i++)
         scanf("%d %d", &alunos[i].codigo, &alunos[i].media);
      /* procura aluno de maior media */
      indice_melhor = 0;
      for (i = 0; i < n; i++)
         if (alunos[i].media > indice_melhor)
             indice_melhor = alunos[i].media;
      /* escreve resposta */
      printf("Turma %d\n", turma++);
	  for(i=0;i<n;i++){
		//printf("lol");
		if(flag==0&&alunos[i].media==indice_melhor){
			flag=1;
			printf("%d",alunos[i].codigo);}
		else if (alunos[i].media==indice_melhor)printf(" %d",alunos[i].codigo);
	  }
      /* le numero de alunos da proxima turma */
	  printf("\n\n");
      scanf("%d", &n);
    }
  return 0;
}