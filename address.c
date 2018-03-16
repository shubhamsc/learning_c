#include <stdio.h>

int main(void){
  int a = 5;
  int b = 6;
  int *c = &a;
  printf("size of a %ld\n", sizeof(a));
  printf("value of a %d\n",a);
  printf("address of a %p\n",c);
  printf("address of b %p\n",&b); 
  printf("address of c %p\n",&c);   
}