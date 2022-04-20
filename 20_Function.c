#include<stdio.h>

int sum(int a,int b);
int main(){
  int c;
  c = sum(3,5);   // arguments are 3,5 -> actual values to the function to make a call
  printf("The sum is %d\n",c);
  return 0;
}

// if the passed variable is changed inside the function ,the function call doesnt change the value in the calling function ,it is a misnomer
int sum(int a,int b){   //parameters are a,b -> variable placeholders in the function defination
  return a+b;
}