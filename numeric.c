#include "numeric.h"
#include <stdio.h>          
#include <stdlib.h>
#include <math.h>


int isPrime(int n){
  for (int i = 2; i <(int)sqrt(n); i++){
    if (n%i==0){
      return 0;
    }
  }
  return 1;
}

int compute_prime(int max){
  int r;


  do{
    r=(int)(((float)rand()/(RAND_MAX))*(float)max);
  }while(!isPrime(r));

  return r;
}