#include <stdio.h>
#include <string.h>

int main(){
	printf("Enter the word to be checked : ");
	char string[500];
	gets(string);
	int length=strlen(string)-1;
	int x;
	
	for(x=0;length>x;x++){
		if(string[x]!=string[length]){
			printf("%s is not a palindrome",string);
	
			return 0;
			
		}
		length--;
	}
	printf("%s is a palindrome",string);
	return 0;
}