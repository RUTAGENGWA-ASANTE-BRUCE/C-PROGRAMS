#include <stdio.h>
 int main(){
 	int x,y,z,t,b,p,order1,order2,elements1,elements2,number;
 	printf("Enter order of first matrix : ");
 	scanf("%d",&order1);
 	printf("Enter number of elements per order : ");
 	scanf("%d",&elements1);
 	int matrix1[order1][elements1];
 	for(x=0;x<order1;x++){
 		for(y=0;y<elements1;y++){
 			printf("Enter order %d element %d value : ",x,y);
 			scanf("%d",&number);
 			matrix1[x][y]=number;
		 }
	}
	
	printf("Matrix1 is [");
    for(z=0;z<order1;z++){
    	printf("\n");
    	for(t=0;t<elements1;t++){
    		printf("\t%d",matrix1[z][t]);
		}
		printf("\n");
	}
	printf("]");
	
	
	printf("Enter order of second matrix : ");
 	scanf("%d",&order2);
 	printf("Enter number of elements per order : ");
 	scanf("%d",&elements2);
 	int matrix2[order2][elements2];
 	for(x=0;x<order1;x++){
 		for(y=0;y<elements2;y++){
 			printf("Enter order %d element %d value : ",x,y);
 			scanf("%d",&number);
 			matrix2[x][y]=number;
		 }
	}
	
	printf("Matrix2 is [");
    for(z=0;z<order2;z++){
    	printf("\n");
    	for(t=0;t<elements2;t++){
    		printf("\t%d",matrix1[z][t]);
		}
		printf("\n");
	}
	printf("]\n");
	printf("%d",matrix1[0][2]);
	
	int matrixFinal[order1][elements2];
	for(x=0;x<order1;x++){
 		for(y=0;y<elements2;y++){
		  for(t=0;t<order1;t++){
 			for(b=0;b<elements1;b++){	
 			 for(z=0;z<order2;z++){
 			 	int sum=0;
 				for(p=0;p<elements1;p++){	
                   number=matrix1[t][b] * matrix2[z][p];
                   sum=sum+number;
                   matrixFinal[x][y]=sum;
                }
                 printf("matrix1[%d][%d] * matrix2[%d][%d] = %d\n", t, b, z, p, sum);
             }
            }
        }
     }
    }
	//variables: order1, order2, elements1, elements2
//	for(x=0; x<order1; x++){
//		for(y=0; y<elements2; y++){
//			for(t=0; t<order2; t++){
//				
//			}
//		}
//	}
//	
	
    printf("MatrixProduct is [");
    for(z=0;z<order1;z++){
    	printf("\n");
    	for(t=0;t<elements2;t++){
    		printf("\t%d",matrixFinal[z][t]);	
		}
		printf("\n");
	}
	printf("]");
    
                
	
	
    return 0;
	 
 		
 }