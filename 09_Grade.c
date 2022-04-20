#include<stdio.h>

int main(){
  int marks;
  printf("enter the marks:");
  scanf("%d",&marks);
  if(marks>=90 && marks<= 100){
    printf("you got A grade");
  }
  else if(marks>=80 && marks<90){
    printf("you got B grade");
  }
  else if( marks>=70 && marks<80){
    printf(" you got C grade");
  }
  else if( marks>= 60 && marks< 70){
    printf(" you got D grade"); 
  }
  else{
    printf("you got F grade");
  }
  return 0;
}