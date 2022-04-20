#include<stdio.h>

int main(){
  int i;
  scanf("%d",&i);
  while(i<=20 && i>=10){
    printf("the value of i is %d\n",i);
    i++; //i =i+1;
  }
  return 0;
}