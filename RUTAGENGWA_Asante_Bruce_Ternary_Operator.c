#include <stdio.h>


void main(){
	int x=10;
	int y=11;
	
    int	big=(x<y)?x:y;
	
	if(big==x){
		printf("x is greater than y");
	}
	else{
		printf("y is greater than x");
	}
}