#include<stdio.h>

int main(){
  int length,breadth;
  int radius;
  float pi=3.14;
  int height = 5;
  printf("enter the length and breadth\n");
  scanf("%d%d",&length,&breadth);
  printf("the area of rectangle is %d\n",length*breadth);
  printf("enter the radius of circle\n");
  scanf("%d",&radius);
  printf("the area of circle is %f\n",pi*radius*radius);
  printf("the volume of cylinder %f\n",pi*radius*radius*height);
  return 0;
}