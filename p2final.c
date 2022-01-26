#include<stdio.h>
int input()
{
  int a;
  printf("enter a value:\n");
  scanf("%d",&a);
  return a;
}
int add(int a,int b)
{
  int k=a+b;
  return k;
}
void output(int a,int b,int sum)
{
 printf("the sum of %d and %d is %d\n",a,b,sum); 
}
int main()
{
  int a=input();
  int b=input();
  int sum=add(a,b);
  output(a,b,sum);
  return 0;
}
