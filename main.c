#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv){
	//char *mystring;
	int n;
	//printf("%s\n",argv[0]);

	if (argc<2){
		printf("Error: You need to pass an argument.\n");
		return 0;
	}

	//mystring=argv[1];
	n=atoi(argv[1]);
	//printf("%d\n",n);
	//sprintf(mystring,"%s",argv[1]);
	//printf("%s\n",mystring);
	int *array = malloc(n *4);

	for (int i = 0; i < n; ++i){
		array[i]=i+1;
		printf("%d----%p\n", array[i],&array[i]);
	}
	free(array);
	return 1;
}
