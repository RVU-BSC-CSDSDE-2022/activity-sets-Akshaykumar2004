#include<stdio.h>

void input_n_and_r(int *n,int *r);
int nCr(int n,int r);
void output(int n,int r,int reault);
int factorial(int n);

void input_n_and_r(int *n,int *r)
{
  printf("Enter the 'N' :\n");
  scanf("%d",n);
  printf("Enter the 'R' :\n");
  scanf("%d",r);
}

int nCr(int n,int r)
{
  int ans = 0;
  ans = factorial(n) / (factorial(r) * (factorial(n-r)));
  return ans;
}

int factorial(int n)
{
  int fac = 1;
  for(int i=1;i<=n;i++)
    {
      fac = fac * i;
    }
  return fac;
}

void output(int n,int r,int result)
{
  printf("for n = %d and r = %d , nCr = %d\n",n,r,result);
}
void main()
{
  int n,r,ans;
  input_n_and_r(&n,&r);
  ans = nCr(n,r);
  output(n,r,ans) ; 
}