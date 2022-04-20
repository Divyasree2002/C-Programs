#include<stdio.h>
#include<math.h>

int main(){
  int a= 2, b= 5; // int and int -> int ,int and float -> float , float and float -> float
  int c ,d;
  printf("the sum of a and b is %d \n",a+b);
  printf("enter the values of c,d \n");
  scanf("%d%d",&c,&d);
  printf("the sum of c and d is %d \n",c+d);
  printf("the difference of c and d is %d \n",c-d);
  printf("the product of c and d is %d \n",c*d);  //no operator is assumed to be present
  printf("the division of c and d is %d \n",c/d);
  printf("the modulo division of c and d is %d \n",c%d); //sign of reaminder will be sign of numerator
  printf("the power of c to d is %f \n",pow(c,d));
  return 0;
}