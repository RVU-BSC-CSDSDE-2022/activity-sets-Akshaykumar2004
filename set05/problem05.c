#include<stdio.h>
#include<math.h>

int input();
int factorial(int n);
float borga_x(int x);
void output(int x,float result);

int input()
{
  int n;
  printf("Enter the X :");
  scanf("%d",&n);
  return n;
}

int factorial(int n)
{
  int f=1;
  for(int i=1;i<=n;i++)
    {
      f = f * i;
    }
  return f;
}

float borga_x(int x)
{
  int i = 1,n = 3;
  float b = 1,borga = 1;
  while( b > 0.000001)
    {
      b = pow(x,i) / factorial(n);
      borga = borga + b;
      n=n+2;
      i=i+1;
    }
  return borga;
}

void output(int x,float result)
{
  printf("borga(%d) = %.5f\n",x,result);
}

void main()
{
  int x=input();
  float borga=borga_x(x);
  output(x,borga);
}

