#include <stdio.h>
 
void fibo(int n,int* res){
  int first_number = -1;
  int second_number = 1;
  for(int i=0; i<n; i++){
    res[i] = first_number+second_number;
    first_number = second_number;
    second_number = res[i];
  }
}

int main(void){
  int n = 10;
  int res[n];
  fibo(n,res); 
  for(int i=0; i<n; i++){
  printf("%d\n",res[i]);
  }
  return 0;
}