#include<stdio.h>

int main(){
  //prime numbers - divisible by 1 and itself ,best method is data structures- sieve of erathones method 
  int n ,prime=1;
  printf("enter the number:");
  scanf("%d",&n);
  for(int i= 2;i<n;i++){    // iterates between 2 and  number-1 because every number has 1 and itself as its multiples 
    if(n%i==0 ){
      prime=0;
      break;
    }
  }
  if(prime==0 && n!=2){
    printf("This is not prime.\n");
  }
  else{
    printf("This is prime.\n");
  }
  return 0;
}
