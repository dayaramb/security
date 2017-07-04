#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	if(argc <2){
		printf("Required a string value:\n");
		exit(0);
	}
	char buffer[10];
	strcpy(buffer,argv[1]);
	printf("the buffer is: %s",buffer);
   	printf("\n");	
	return 0;
	}
