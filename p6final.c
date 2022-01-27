#include<stdio.h>
int input_n()
{
  int n;
  printf("enter value of n:\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i,x,sum=0;
  for(i=1;i<=n;i++)
     {
       sum=sum+i;
     }
  return sum;
  x=sum;
}
void output(int n,int sum)
{
  int i;
  for(i=1;i<=n;i++)
  {
    printf("%d+",i);
  }
  printf(" is %d",sum);
}  
int main()
{
  int a,b,c;
  a=input_n();
  b=sum_n(a);
  output(a,b);
}