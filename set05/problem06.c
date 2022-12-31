#include<stdio.h>

int input_n();
void input(int n,int a[n]);
float odd_average(int n,int a[n]);
void output(float avg);

int input_n()
{
  int n;
  printf("Enter the number of elements:\n");
  scanf("%d",&n);
  return n;
}

void input(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      printf("Enter the element %d : ",i+1);
      scanf("%d",&a[i]);
    }
}

float odd_average(int n,int a[n])
{
  int count=0,odd_sum=0;
  float avg;
  for(int i=0;i<n;i++)
    {
      if((a[i] % 2) == 0){continue;}
      
      count = count +1;
      odd_sum = odd_sum + a[i];
    }
  avg =  odd_sum/count;
  return avg;
}

void output(float avg)
{
  printf("Average of all the odd elements is %.2f\n",avg);
}

void main()
{
  int n=input_n();
  int a[n];
  input(n,a);
  float avg=odd_average(n,a);
  output(avg);
}