#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int number;
  // if write only number = rand() then its gives same repeated number
  srand(time(0)); // gives different number everytime (it changes for every sec)
  number = rand()%100 + 1;   // rand is from stdlib library ,generates randome number between 1 to 100
  printf("the number is %d\n",number);
  return 0;
}