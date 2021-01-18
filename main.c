#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bit.h"
#include "numeric.h"


int main(int argn, char **argv){
  char *msg;
  int key;
  int p,q,n,phi,e;
  srand(time(NULL));
  p= compute_prime(2048);
  q= compute_prime(2048);
  n=p*q;
  phi=(p-1)*(q-1);
  e=compute_prime(phi);
  
  printf("p\tp\tn\tphi\t\n");
  printf("%i\t%i\t%i\t%i\t\n",p,q,n,phi);

  return 1;
}



/*
  msg=malloc(4);

  c = 0x01; //''; //BIG 1000 0000   LIT 0000 0001
  i = 1024;
  d = 3.1416;

  //printf("%i\t%i\t%le\n",c,i,d);

  //printf("Número: %i\n",c);
  //print_bit(c,0);
  //print_bit(c,1);

  //printf("%i\n",sizeof(i) );

  key=1111111;

  i = packing('h','o','l','a');
  printf("%i\n",i);
  i+=key;
  unpacking(i,msg);
  printf("%s\n", msg);
  i-=key;
  unpacking(i,msg);
  printf("%s\n", msg);
  packIn2Double(1,2);
  free(msg);
  //char n=0x12;
  //printf("\nNúmero: %i\n",n);
  //print_bit(n,0);
  //print_bit(n,1);

//  char *mystring;
//  int *mypointer;
//  // printf("%s\n",argv[1]); 
//  if (argn < 2){
//    printf("Error: You need pass an argument.\n");
//    return 0;
//  }
//  mystring = malloc(1024);        //sizeof(argv[1]));
//  sprintf(mystring,"%s",argv[1]);
//  printf("%s\n",mystring);
//  printf("%p\n",&mystring);
//  free(mystring);
  */