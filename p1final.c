#include <stdio.h>
void add()
 {
  int num1,num2;
  float sum;
  printf("enter two number\n");
  scanf("%d%d",&num1,&num2);
  sum=num1+num2;
  printf("addition of %d + %d is = %f\n",num1,num2,sum);
 }
int main()
 {
  add();
  return 0;
 }
