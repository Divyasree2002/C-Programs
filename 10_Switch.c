#include<stdio.h>
// nested switch is done but rarely

int main(){
  int rating;
  printf("enter the rating\n");
  scanf("%d",&rating);
  switch(rating){
    case 1: printf("your rating is 1\n"); break;
    case 2: printf("your rating is 2\n"); break;
    case 3: printf("your rating is 3\n"); break;
    case 4: printf("your rating is 4\n"); break;
    case 5: printf("your rating is 5\n"); break;
    default: printf("invalid rating");
  }
  return 0;
}