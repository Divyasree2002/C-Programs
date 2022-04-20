#include<stdio.h>

int main(){
  int principle=10000,rate=2,time=1;
  int simpleInterest= (principle*time*rate)/100;
  printf("the value of simpleInterest is %d",simpleInterest);

  return 0;
}