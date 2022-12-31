#include<stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2,  Fraction sum);

Fraction input_fraction()
{
  Fraction n;
  printf("Enter a fractional  number :\n");
  scanf("%d%d",&n.num,&n.den);
  return n;
}

int find_gcd(int a,int b)
{
    while(a != b){
    if(a>b)
    {
      a=a-b;
    }
    if(b>a)
    {
      b=b-a;
    }
  }return a;
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction sum;
  if(f1.den == f2.den){
    sum.num=f1.num+f2.num;
    sum.den=f1.den;
  }
  if(f1.den != f2.den){
    sum.num=(f1.num*f2.den) + (f2.num*f1.den);
    sum.den= f1.den * f2.den;
  }
  return sum;
}

void output(Fraction f1, Fraction f2,  Fraction sum)
{
  int gcd=find_gcd(sum.num,sum.den);
  if(sum.num == sum.den)
  {
    printf("The sum fractions is 1\n");
  }
  if(sum.num != sum.den){
    sum.num=(sum.num / gcd);
    sum.den=( sum.den / gcd);
    printf("%d/%d + %d/%d = %d/%d\n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
  }
}

void main()
{
  Fraction a=input_fraction(),b=input_fraction();
  Fraction sum=add_fractions(a,b);
  output(a,b,sum);
}