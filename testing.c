#include <stdio.h>
void main(void){
	
 	while(1){
		char command[50];
		printf("Enter command\n");
		scanf("%s",command);
		system(command);
	}
}