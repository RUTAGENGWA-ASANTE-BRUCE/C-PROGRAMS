#include <stdio.h>
int main(){
     int *pc,c;
     c=22;
     printf("Addresses of c:%u\n",&c);
     printf("Value of c:%d\n\n",c);
     
     pc=&c;
     printf("adresses of pointer pc:%u\n",pc);
     printf("Content of poniter pc:%d\n\n",*pc);
     
     c=11;
     printf("Adresses of pointer pc:%u\n",&c);
     printf("Content of pointer pc:%d\n\n\"",*pc);
     
     *pc=2;
     printf("Adresses of c:%u\n",&c);
     printf("Value of c: %d\n\n",c);
	return 0;
}