#include <stdio.h>

void main(){
	int i,y;
	int twoD[2][5]={
	{1,2,3,4,5},
	{1,2,3,4,5}
	};
   for(i=0;i<2;i++){
   	for (y=0;y<5;y++){
   		printf("Element arr[%d][%d]=%d \t",i,y,twoD[i][y]);
	   }
	   printf("\n");
   }

}