#include<stdio.h>

void change(int a);
int main(){
  int b = 344;
  printf("The value of b before change is %d\n",b);
  change(b);  //this happens because a copy of b is passed to the change function
  printf("The value of b after change is %d\n",b);
  return 0;   //ctrl + enter leads to new line when cursor is inbetween the letters
}
void change(int a){
  a= 77;
}
