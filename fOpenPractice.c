#include <stdio.h>

int main() {
	char name[50];
	int i;
	
	FILE *fptr;
	fptr = fopen("cText.txt","w");
	if(fptr == NULL) {
		printf("Error!");
		exit(1);
	}
	
	printf("Enter your names: ");
	scanf("%[^\n]s",name);
	fprintf(fptr,"Student is %s",name);
	
	fclose(fptr);
	return 0;
		
}