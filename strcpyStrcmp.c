#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
	char fname[81];
	char buffer[101];
	char prevline[101]="";
	FILE *instream;
	
	printf("Show file: ");
	scanf("%80s",fname);
	if((instream=fopen(fname,"r"))==NULL){
		printf("Unable too open file %s\n",fname);
		exit(-1);
	}
	printf("\n%s:\n",fname);
	while(fgets(buffer,sizeof(buffer)-1,instream)!=NULL)
	if(!strcmp(buffer,prevline)){
		printf("Duplicate line: %s",buffer);
	}
	else if (!strncmp(buffer,prevline,10)){
		printf("Start the same:\n  %s  %s",prevline,buffer);
		strcpy(prevline,buffer);
	}	
	fclose(instream);
}