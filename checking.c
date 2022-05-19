#include <stdio.h>

void main(){
	char username[50] ;char password[50];
	
	printf("Enter your username\n");
	scanf("%c",&username);
	printf("Enter your password\n");
	scanf("%c",&password);
	
	if(username=="bruce"){
		printf("welcome mister");
	}
	else{
		printf("Access denied");
	}
     printf("%c",username);
}n