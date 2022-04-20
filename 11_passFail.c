#include<stdio.h>

int main(){
  int m1,m2,m3;
  float total;
  printf("enter the marks of 3 subjects\n");
  scanf("%d%d%d",&m1,&m2,&m3);
  total = (m1+m2+m3)/3;
  if(m1>=33 && m2>= 33 && m3>=33 && total>=40){
    printf("he is pass with %f\n",total);

  }
  else{
    printf("He is fail with %f",total);
  }

  return 0;
}