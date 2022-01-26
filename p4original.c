#include<stdio.h>
int input()
{
  int g;
  printf("Enter the value\n");
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
  return largest;
}
void output(int a,int b, int c,int largest)
{
  if(largest ==a)
  {
    printf("%d is the largest of %d and %d\n",a,b,c);
  }
  else if(largest==b)
  {
  printf("%d is the largest of %d and %d\n",b,a,c);
  }
  else
  {
    printf("%d is largest of %d and %d\n",c,a,b);
  }
}
int main()
{
  int x,y,z,j;
  x=input();
  y=input();
  z=input();
  j=cmp(x,y,z);
  output(x,y,z,j);
  return 0;
}