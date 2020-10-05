#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv){
	char *mystring;
	//printf("%s\n",argv[0]);
	if (argc<2){
		printf("Error: You need to pass an argument.\n");
		return 0;
	}
	mystring=malloc(sizeof(argv[1]));
	sprintf(mystring,"%s",argv[1]);
	printf("%s\n",mystring);
	return 1;
}