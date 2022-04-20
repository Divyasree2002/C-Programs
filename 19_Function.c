#include<stdio.h>
// pressing alt and tapping gives multiple cursors
void display();
void GoodMorning();
void GoodAfternoon();
void GoodEvening();    // function prototype
int main(){
  int a;
  display(); 
  GoodMorning();   //function call
  return 0; 
}

void display(){   //function defination
  printf("hey! its function display\n");    //library pre defined function
}
void GoodMorning(){     //user defined function
  printf("Good Morning Dude\n");
  GoodAfternoon();        //function inside function
}
void GoodAfternoon(){
  printf("Good Afternoon\n");
  GoodEvening();
}
void GoodEvening(){ 
  printf("Good Evening\n");
}