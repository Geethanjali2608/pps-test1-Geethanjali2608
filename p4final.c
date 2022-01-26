#include<stdio.h>
int input()
{
  int g;
  printf("enter a number:\n");
  scanf("%d",&g);
  return g;
}
int cmp(int a,int b,int c)
{
  int largest;
  if(a>b && a>c)
  {
    largest=a;
    return a;
  }
  else if(b>c)
  {
    largest=b;
    return b;
  }
  else
  {
    largest=c;
    return c;
  }
}
void output(int a,int b,int c,int largest)
{
  if(largest==a)
    printf("%d is largest among %d and %d",a,b,c);
  else if(largest==b)
    printf("%d is largest among %d and %d",b,a,c);
  else
    printf("%d is largest among %d and %d",c,a,b); 
}
int main()
{
  int a,b,c,j;
  a=input();
  b=input();
  c=input();
  j=cmp(a,b,c);
  output(a,b,c,j);
}
  