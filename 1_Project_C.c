#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int number,guess,nguesses=1;
  // if write only number = rand() then its gives same repeated number
  srand(time(0)); // gives different number everytime (it changes for every sec)
  number = rand()%100 + 1;   // rand is from stdlib library ,generates randome number between 1 to 100
  //printf("the number is %d\n",number);
  do{
    printf("Guess the number between 1 to 100 \n");
    scanf("%d",&guess);
    if(guess >number){
      printf("Lower Number please\n");
    }
    else if(guess<number){
      printf("Higher number please\n");
    }
    else{
      printf("You guessed in %d attempts\n",nguesses);
    }
    nguesses++;
  }while(guess!=number);
  return 0;
}