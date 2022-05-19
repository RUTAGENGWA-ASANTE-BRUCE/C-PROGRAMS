#include <stdio.h>

void main(){
  char string1[11];
  char string2[11];
  char string3[11];
  scanf("%10s%*[^@],%10s*[^,],%10s",string1,string2,string3);
  printf(" string1: %s string2: %s string3: %s",string1,string2,string3);
}