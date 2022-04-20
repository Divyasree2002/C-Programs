#include<stdio.h>
// ==,>=,<=,<,>,!=   relational operator

int main(){
  int age;
  int vipPass = 0;
  vipPass = 1;
  printf("enter your age:");
  scanf("%d",&age);
  if((age <= 70 && age >= 18)||(vipPass == 1)){
    printf("you are above 18 and below 70, you can drive");
  }
  else{
    printf("you cannot drive");
  }
  return 0;
}