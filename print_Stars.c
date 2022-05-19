#include <stdio.h>
int main() {
	int totalRowNo,row,space,symbol;
	printf("Enter the number of rows\n");
	scanf("%d",&totalRowNo);
	
	for(row = 1; row <= totalRowNo; row++) {
		for(space = 1; space <= (totalRowNo-row); space++)
		printf(" ");
		for(symbol = 1; symbol <= ((2*row)-1); symbol++)
		printf("*");
	printf("\n");
	}
	for(row=totalRowNo-1;row>=1;row--){	
	
    		for(space = 1; space <= (totalRowNo-row); space++)
		printf(" ");
		for(symbol = 1; symbol <= ((2*row)-1); symbol++)
		printf("*");
	printf("\n");
	}
	
	return 0;
}