
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include<stack>


#include<cmath>

using namespace std;



int main () {
	int n, flag;
	stack<char> pilha;
	cin>>n;
	char c;
	getchar();
	for(int i=0;i<n;i++){
		flag=0;
		while((c=getchar())!='\n'){
			if(c=='('||c=='{'||c=='['){
				pilha.push(c);
			}else{
				if(pilha.size()>0){
					if(pilha.top()=='{'&&c=='}'||pilha.top()=='('&&c==')'||pilha.top()=='['&&c==']'){
				
					}else{
						flag=1;
					}
					pilha.pop();
				}else{
					flag=1;
				}
			}
		}
		if(flag==1||pilha.size()!=0)cout<<"N\n";
		else cout<<"S\n";
		while(pilha.size()!=0)pilha.pop();
	}
	
}