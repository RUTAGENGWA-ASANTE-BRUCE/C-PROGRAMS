#include <stdio.h>
int main(){
	printf("enter number of columns");
	int x,y,z,rows,space;
	scanf("%d",&rows);
	for(x=0;x<rows;x++){
		for(space=0;space<=(x-1);space++){
			printf(" ");
		}
		for(y=0;y<=(rows-x);y++){
			
			printf("*");
		}
		printf("\n");
	}
	return 0;
}