#include <stdio.h>
void main(){
	char fname[81];
	char buffer[101];
	FILE *instream;
	
	printf("Show file: ");
	scanf("%80s",fname);
	if((instream=fopen(fname,"r"))==NULL){
		printf("Unable too open file %s\n",fname);
		exit(-1);
	}
	printf("\n%s:\n",fname);
	while(fgets(buffer,sizeof(buffer)-1,,instream)!=NULL)
		fputs(buffer,stdout);
	
	fclose(instream);
}