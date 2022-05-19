#include <stdio.h>

int main(){
	int number1=1;
	int number2=1;
	int number3;
	int i;
	int elements;
	printf ("Enter number of elements  ");
	scanf("%d",&elements);
	printf("%d\t %d",number1,number2);
	for(i=2;i<elements;i++){
		number3=number1+number2;
		printf("\t %d",number3);
		number1=number2;
		number2=number3;
	}
	return 0;	
}