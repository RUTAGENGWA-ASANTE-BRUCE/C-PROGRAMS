#include <stdio.h>
int main(){
	printf("Enter range");
	int numbers,i,x,y;
	scanf("%d",&numbers);
	printf("\n");
	for(i=0;i<=numbers;i++){
	   for(y=i;y<=numbers;y++){
	   	printf("%d",y);
	   }
	   printf("\n");
	}
	return 0;
}