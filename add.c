#include <stdio.h>

int add_two(int a,int b){
  return a+b;
}

int main(void){
  int sum = add_two(5,8);
  printf("%d\n",sum);
  return 0;
}