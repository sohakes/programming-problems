
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include<stack>


#include<cmath>

using namespace std;



int main () {
	//x*y+(x-1)*(y-1)
	//2xy-x-y+1=z
	//2xy-x=z+y-1
	//x=(z+y-1)/(2y-1)
	//x=(z+1)/(3)
	int x=0, y=0, z=0;
	int fx=0;
	int res=0;
	scanf("%d",&z);
	//2*y*(y-1)+1
	for(int y=2;2*y*y-2*y+1<=z;y++){
		fx=(z+y-1)%(2*y-1);
		//x=(z+y-1)/(2*y-1);
		//printf("x%Lf %Lf %dx\n",floor(fx),fx,y);
		if(fx==0){res++;}
		//if(fx<y)break;
	}
	printf("%d",res);
	
	
	return 0;
	
}