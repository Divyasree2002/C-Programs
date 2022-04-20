#include<stdio.h>

int fact(int x);
int main(){
  int a = 5;
  printf("the value of factorial is %d",fact(a));
  return 0;
}

int fact(int x){
  if(x==1 || x==0){   //without condition it gives memory error
    return 1;
  }
  else{
    return x * fact(x-1);
  }
}