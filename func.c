#include <stdio.h>

int add2(int n){
  return n+2;
}

void map(int* a,int* func){
  printf("%d",*a);
}

int main(void){
  int a[10] = {1,2,3,4,5,6};
  int* b = &a[10];
  int* c = &add2;
  map(b,c);
  return 0;
}
