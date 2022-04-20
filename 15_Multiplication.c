#include<stdio.h>

int main(){
  int a,sum=0;
  printf("enter the number\n");
  scanf("%d",&a);
  for( int i=1;i<=10;i++){
    printf("%d * %d = %d\n",a,i,a*i);
    sum += a*i;
  }
  printf("the sum of multiples of a is %d\n",sum);
  printf("\n");
  for(int i = 10;i>1;i--){
    printf("%d * %d = %d\n",a,i,a*i);	
  }
  return 0;
}