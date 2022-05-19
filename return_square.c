#include <stdio.h>
#define N 100


void main(){
	int a;
	a=2;
	
	while(a<N){
		printf("%d \n",a);
		a*=a;
	}
}