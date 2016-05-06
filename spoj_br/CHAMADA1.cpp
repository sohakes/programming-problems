#define maxar 5000
#define maxver 110
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include<stdlib.h>
#include<map>

using namespace std;

int compare (const void * a, const void * b)
{
  return strcmp(*(const char **)a, *(const char**)b);
}



int main () {
	int n, pos;
	char * nomes[101];
	cin>>n>>pos;

	for(int i=0;i<n;i++){
		nomes[i]=(char *)malloc(30*sizeof(char));
		scanf("%s", nomes[i]);
		//cin>>nomes[i];
	}
	qsort (nomes, n, sizeof(char *), compare);
	cout<<nomes[pos-1];

	return 0;
}
