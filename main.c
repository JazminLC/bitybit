#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv){
	int n;
	if (argc<2){
		printf("Error: You need to pass an argument.\n");
		return 0;
	}
	n=atoi(argv[1]);
	int *array = malloc(n *4);

	for (int i = 0; i < n; ++i){
		array[i]=i+1;
		printf("%d----%p\n", array[i],&array[i]);
	}
	free(array);
	return 1;
}
