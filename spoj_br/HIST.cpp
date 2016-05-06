#include<stdio.h>
#include<stdlib.h>
#include<map>

using namespace std;

int main(){
	int n,at,soma;
	map<int,int> hash;

	while(1){
		hash.clear();
		scanf("%d",&n);
		if(n==0)break;
		soma=0;
		for(int i=0;i<n;i++){
			scanf("%d",&at);
			soma+=at+hash[at]+i;
			hash[at]=-i-at;
			
		}
		printf("%d\n",soma);
	}

	return 0;	
}