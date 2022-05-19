#include <stdio.h>

void main(){
	int elements=5,i,j,space=0;
	
	for(i=0;i<=elements;i++){
		for(j=i;j<i;j++){
			printf(" ");
		}
		for(j=elements;j>0;j--){
			printf("*");
		}
		elements--;
	
		printf("\n");
	}
}