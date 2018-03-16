#include <stdio.h>

int fact(int a){
  if(a==1)
  return 1;
  return a*fact(a-1);
}

int main(void){
  int n = 12;
  int f = fact(n);
  printf("factorial of %d is %d\n",n,f);
}
