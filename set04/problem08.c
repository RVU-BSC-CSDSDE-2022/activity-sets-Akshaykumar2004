#include<stdio.h>

typedef struct fraction{
int num,den;
} fraction;

int input_n();
fraction input_fraction();
void input_n_fractions(int n,fraction f[n]);
int find_gcd(int a,int b);
fraction add_fraction(fraction f1,fraction f2);
fraction add_n_fraction(int n,fraction f[n]);
void output(int n,fraction f[n],fraction sum);

int input_n()
{
  int n;
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  return n;
}

fraction input_fraction()
{
  fraction a;
  printf("Enter the fraction:\n");
  scanf("%d%d",&a.num,&a.den);
  return a;
}

void input_n_fraction(int n,fraction f[n])
{
  for(int i=0;i<n;i++)
    {
      f[i]=input_fraction();
    }
}

int find_gcd(int a,int b)
{
  while(a != b)
    {
      if(a>b){a = a-b;}
      if(b>a){b = b-a;}
    }
  return a;
}

fraction add_fraction(fraction f1,fraction f2)
{
  fraction sum;
  if(f1.den == f2.den)
  {
    sum.num= f1.num+f2.num;
    sum.den= f1.den;
  }
  if(f1.den != f2.den)
  {
  sum.num = f1.num * f2.den + f2.num * f1.den;
  sum.den = f1.den * f2.den;
    }
  int gcd = find_gcd(sum.num,sum.den);
  sum.num = sum.num/gcd;
  sum.den = sum.den/gcd;
  return sum;
}

fraction add_n_fractions(int n,fraction f[n])
{
  fraction sum={f[0].num,f[0].den};
  for(int i=1;i<n;i++)
    {
      sum = add_fraction(sum,f[i]);
    }
  return sum;
}

void output(int n,fraction f[n],fraction sum)
{
  // int gcd=find_gcd(sum.num,sum.den);
  if(sum.num == sum.den)
  {
    printf("The sum of all the fractions is 1\n");
  }
  if(sum.num != sum.den)
  {
    // sum.num = sum.num/gcd;
    // sum.den = sum.den/gcd;
    for(int i=0;i<n-1;i++)
      {
        printf("%d/%d + ",f[i].num,f[i].den);
      }
    printf("%d/%d = %d/%d\n",f[n-1].num,f[n-1].den,sum.num,sum.den);
  }
}

void main()
{
  int n=input_n();
  fraction a[n],sum;
  input_n_fraction(n,a);
  sum = add_n_fractions(n,a);
  output(n,a,sum);
}