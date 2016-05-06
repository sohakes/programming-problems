#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 123456

//Copiado do feofilof :(



long long intercala (int v[],int p, int q, int r){
	int i, j, k, *w;
	long long inv=0;
	w = (int*)malloc ((r-p) * sizeof (int));
	i = p; j = q;
	k = 0;

	while (i < q && j < r) {
		if (v[i] <= v[j])  w[k++] = v[i++];
		else{
			w[k++] = v[j++];
			inv+=q-i;
		}
	}
	while (i < q)  w[k++] = v[i++];
	while (j < r)  w[k++] = v[j++];
	for (i = p; i < r; ++i)  v[i] = w[i-p];
	free (w);
	return inv;
}



long long merge(int v[], int p, int r){
	long long inv=0;
	//printf("1\n");
	int q=0;
	if(p<r-1){
		q=floor((p+r)/2);
		//printf("\n-%d %d %d-\n",p,q,r);
		inv+=merge(v,p,q);
		inv+=merge(v,q,r);
		//getchar();
		inv+=intercala(v,p,q,r);
	}
	return inv;
}

int main(){
	int v[MAX], v2[MAX];
	int n=0,numc;
	int i=0;
	int p=0;
	int k;
	long long inv = 0;
	scanf("%d",&numc);
	for(int j=0;j<numc;j++){
		scanf("%d %d",&n,&k);
		for(i=0;i<n;i++){
			p=i/k+(n/k)*(i%k);
			if(n%k!=0){
				if(n%k>=i%k){
					p+=i%k;
				}else{
					p+=n%k;
				}
		
			}
			v2[i]=p;
			//printf("-%d-",p);
			scanf("%d",&v[p]);
		}
		//printf("\n----\n");
		//for(i=0;i<n;i++){
		//	printf("%d ",v[i]);
		//}
		int q=n/k;
		inv=0;
		for(i=n-1;i>0&&i>n-1-k;i--){
			inv+=merge(v,v2[i%k],v2[i]+1);
			//printf("x%d %dx\n",v2[i%k],v2[i]+1);
			
			
		}
		int flag=0;
		int ant=0;
		for(i=1;i<n;i++){
			if(v[v2[i]]<v[v2[i-1]]){
				//printf("-=-%d %d %d %d %d-=-\n", v[v2[i]],v[v2[i-1]],v2[i],v2[i-1],i);
				flag=1;
				break;
			}
		}
		//printf("\n----\n");
		//for(i=0;i<n;i++){
	//	//printf("%d ",v[v2[i]]);
		//}
		if(flag==0)printf("%lld\n",inv);
		else printf("impossivel\n");
	//inv=merge(v,0,MAX);
	
	
	}
	
	return 0;
}