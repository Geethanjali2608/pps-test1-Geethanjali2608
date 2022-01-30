#include<stdio.h>
#include<math.h>
float input()
{
  float x;
  printf("enter any value:\n");
  scanf("%f",&x);
  return x;
}
float x,find_square_()
{
  float x;
  float xn=x/2;
  float xnext;
  xnext=0.5*(xn+(x/xn));
  while(fabs(xn-xnext)>0.000001)
  {
    xn=xnext;
    xnext=0.5*(xn+(x/xn));
  }
 return xnext;
}
void output(float x,float result)
{
  printf("the square root of %f is %f\n",x,result);
}
int main()
{
  float a,result;
  a=input();
  result=find_square_root();
  output(a,result);
  return 0;
}