#include <stdio.h>
#include <string.h>
int main(){
	char username[20];
	char password[20];
	printf("Enter the username ");
	scanf("%s",username);
	printf("Enter the password ");
	scanf("%s",password);
	
	if(strcmp(username,"bruce")==0 && strcmp(password,"bruce123")==0){
		printf("Welcome master");
	}
	else{
		printf("Access denied");
	}
	return 0;
}
//if(strcmp(username,'bruce')==0 && strcmp(password,'bruce123')==0)