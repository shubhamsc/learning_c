#include <stdio.h>
 
int fact(int a){
  if(a<1){
    return 1;
  }
  return a*fact(a-1);
}

int main(void){
  unsigned int num;
  scanf("%d",&num);
  printf("%d\n",fact(num));
  return 0;
}