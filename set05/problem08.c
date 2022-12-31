#include<stdio.h>
#include<math.h>

typedef struct _camel{
float r,h,l,w; // r = radius,h = height,l = length,w = weight.
} camel;

int input_n();
void input(int n,camel c[n],float *truck_weight);
void find_camel_weight(int n,camel c[n]);
float compute_total_weight(int n,camel c[n],float truck_weight);
void output(float total_weight);

int input_n()
{
  int n;
  printf("Enter the number of camel's: \n");
  scanf("%d",&n);
  return n;
}

void input(int n,camel c[n], float *truck_weight)
{
  for(int i=0;i<n;i++)
    {
      printf("Enter the detail's of camel no. %d \n",i+1);
      printf("Enter the stomach radius:\n");
      scanf("%f",&c[i].r);
      printf("Enter the height:\n");
      scanf("%f",&c[i].h);
      printf("Enter the length:\n");
      scanf("%f",&c[i].l);
    }
  printf("Enter the weight of truck:\n");
  scanf("%f",truck_weight);
}

void find_camel_weight(int n,camel c[n])
{
  for(int i=0;i<n;i++)
    {
      c[i].w = 3.14 * pow(c[i].r,3) * sqrt(c[i].h*c[i].l);
    }
}

float compute_total_weight(int n,camel c[n],float truck_weight)
{
  float tot_wt=truck_weight;
  for(int i=0;i<n;i++)
    {
      tot_wt = tot_wt + c[i].w;
    }
  return tot_wt;
}

void output(float total_weight)
{
  printf("The total weiight of the truck is %.3f\n",total_weight);
}

void main()
{
  int n=input_n();
  camel a[n];
  float truck_wt,tot_wt;
  input(n,a,&truck_wt);
  find_camel_weight(n,a);
  tot_wt = compute_total_weight(n,a,truck_wt);
  output(tot_wt);
}
