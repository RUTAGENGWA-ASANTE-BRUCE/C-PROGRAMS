#include <stdio.h>

int main(){
	int number,x,y;
	int numbers[4][5]={
	{23,38,40,45,45},
	{35,48,50,27,34},
	{20,45,43,24,27},
	{57,37,23,24,36},
	};
	printf("\n\nEnter the integer x : ");
	scanf("%d",&number);
	for(x=0;x<4;x++){
		for(y=0;y<5;y++){
			if(numbers[x][y]<number){
				numbers[x][y]=100;
			}
		}
	}
	for(x=0;x<4;x++){
		for(y=0;y<5;y++){
         printf(" %d ",numbers[x][y]);
        }
        printf("\n");
    }
		     
}