#include <stdio.h>

void main(void){
	int nCount=1000;
	for(;nCount>=400;){
		nCount-=100;
		printf("%d\t",nCount);
	}
	printf("\n");
}