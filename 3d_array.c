#include <stdio.h>

void main(){
	int i,y,k;
	int twoD[2][5][3]={
	{{1},{2},{3},{4},{5}},
	{{5},{4},{3},{2},{1}}
	};
   for(i=0;i<2;i++){
   	for (y=0;y<5;y++){
   		for(k=0;k<3;k++){
   			printf("%d\t",twoD[i][y][k]);
		   }
	   }
	   printf("\n");
   }
 	printf("%d",twoD[1][3][3]);
}