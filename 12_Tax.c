#include<stdio.h>

int main(){
  float tax=0,income;
  printf("enter the income:");
  scanf("%f",&income);
  if(income<=500000 && income>= 250000){
    tax += 0.05*(income-250000);
  }
  if(income<=1000000 && income> 500000){
    tax += 0.2*(income-500000);
  }
  if(income>1000000 ){
    tax += 0.3*(income-1000000);
  }
  else{
    printf("No tax\n");
  }
  printf("Your net income tax to be paid is %f\n",tax);
  
  return 0;
}