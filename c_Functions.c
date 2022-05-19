#include <stdio.h>
int addTwoNumber(){
	int x,y,sum;
	printf("Enter first number ");
	scanf("%d",&x);
	printf("Enter second number ");
	scanf("%d",&y);
	sum=x+y;
	
	return sum;
}
int main(){
	
	
	printf("The sum is %d",addTwoNumber());	
	return 0;
}