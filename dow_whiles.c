# include <stdio.h>
void main(void){
	int x=0;
	do{
	
		if(x==4){
			goto end;
		}
		printf("%d\n",x);
		x++;
		end:
			break;
	}
	while(x<=10);
}