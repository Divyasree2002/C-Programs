#include<stdio.h>

int main(){
  int i,n,fact=1;
  printf("enter the number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    fact *= i;
  }
  printf("the factorial of n is %d",fact);
  return 0;
}