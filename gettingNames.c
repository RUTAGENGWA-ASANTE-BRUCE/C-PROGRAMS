#include <stdio.h>

void main() {
	char firstName[11];
	char lastName[11];
	
	printf("Enter Your (first , last) names\n");
	scanf("%10s%*[^,],%10s",firstName,lastName);
	printf("Nice to meet you %s %s",firstName,lastName);
}