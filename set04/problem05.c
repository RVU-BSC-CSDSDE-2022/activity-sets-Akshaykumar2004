#include<stdio.h>

int input_size();
void input_array(int n,int a[n]);
int find_largest_index(int n,int a[n]);
void output(int index);

void main()
{
  int n=input_size();
  int a[n],ind;
  input_array(n,a);
  ind = find_largest_index(n,a);
  output(ind);
}

int input_size()
{
  int n;
  printf("enter the size of the array:\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      printf("Enter the element %d of the array :",i);
      scanf("%d",&a[i]);
    }
}

int find_largest_index(int n,int a[n])
{
  int i=0,max=0,max_i=-1;
  for(i=0;i<n;i++)
    {
      if(max<a[i])
      {
        max = a[i];
        max_i = i;
      }
    }return max_i;
}

void output(int index)
{
  printf("The largest number of the array is present in %d\n",index);
}

