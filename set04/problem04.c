#include<stdio.h>

int input_degree();
void input_coefficients(int n,float a[n]);
float input_x();
float evaluate_polynomial(int n,float a[n],float x);
void output(int n,float a[n],float x,float result);

void main()
{
  int n=input_degree();
  float a[n],x=input_x(),answer;
  input_coefficients(n,a);
  answer = evaluate_polynomial( n, a, x);
  output(n,a,x,answer);
}

int input_degree()
{
  int n;
  printf("enter the degree:\n");
  scanf("%d",&n);
  return n;
}

void input_coefficients(int n,float a[n])
{
  for(int i=0;i<=n;i++)
    {
      printf("enter the coefficient %d:\n",i+1);
      scanf("%f",&a[i]);
    }
}

float input_x()
{
  float x;
  printf("enter the value of X:\n");
  scanf("%f",&x);
  return x;
}

float evaluate_polynomial(int n,float a[n],float x)
{
  float ans=0;
  for(int i=n;i>-1;i--)
    {
      if(n == i)
      {
        ans = a[i];
        continue;
      }
      ans = a[i] + ans * x;
    }
  return ans;
}

void output(int n,float a[n],float x,float result)
{
  printf("H([");
  for(int i=0;i<n;i++)
    {
      printf("%.2f,",a[i]);
    }
  printf("%.2f],%.2f) = ",a[n],x);
 
  for(int i=0;i<n;i++)
    {
      if(i == 0)
      {
        printf("%.2f + ",a[0]);
        continue;
      }
      printf("%.2f * %.2f^%d + ",a[i],x,i);
    }
  printf("%.2f * %.2f^%d = %.2f\n",a[n],x,n,result);
}