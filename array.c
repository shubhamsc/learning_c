#include <stdio.h>
 
void square(int* arr,int* b){
  for(int i=0; i<5; i++){
    b[i] = arr[i] * arr[i];
  }
}

int main(void){
  int a[5]={1,2,3,4,5};
  int b[5];
  square(a,b);
  for(int i=0; i<5; i++){
    printf("sqare of %d is %d\n",a[i],b[i]);
  }
  return 0;
}