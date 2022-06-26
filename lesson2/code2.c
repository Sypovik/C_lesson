#include "stdio.h"

int factorial (int x){
    if (x >= 2){
       return x * factorial (x - 1);
    }
    return 1; 
}

int main()
{
    int a = 4;
      printf(" %d! = %d \n",a, factorial(a)); 
    return 0;
}


