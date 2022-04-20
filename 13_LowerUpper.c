#include<stdio.h>
// 97-122
int main(){
  char ch;
  printf("enter the character:\n");
  scanf("%c",&ch);
  if(ch>=65 && ch<=91){
    printf("It is Upper case");
  }
  else if(ch>= 97 && ch<=122){
    printf("It is lower case ");
  }
  else{
    printf("enter valid alphabet");
  }
  return 0;
}