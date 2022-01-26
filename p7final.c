#include<stdio.h>
int cmp(int a,int b,int c)
{
  if(a>b && a>c)
  {
    printf("%d is greater than %d and %d\n",a,b,c);
    return 0;
  }
  else if(b>c)
  {
    printf("%d is greater than %d and %d\n",b,a,c);
    return 0;
  }
  else 
  {
    printf("%d is greater than %d and %d\n",c,a,b);
    return 0;
  }
  
  
  return 0;
}
int input()
{
  int g;
  printf("Enter the value:\n");
  scanf("%d",&g);
  return g;
}
int main()
{
  int g,h,i,j;
  g=input();
  h=input();
  i=input();
  j=cmp(g,h,i);
  return 0;
}