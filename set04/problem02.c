#include<stdio.h>

typedef struct{
int num,den;
} fraction;

fraction input_fraction();
fraction smallest(fraction a,fraction b);
fraction smallest_of_three(fraction a,fraction b,fraction c);
void output(fraction a,fraction b,fraction c,fraction smallest);

fraction input_fraction()
{
  fraction n;
  printf("Enter a fractional  number :\n");
  scanf("%d%d",&n.num,&n.den);
  return n;
}

fraction smallest(fraction a ,fraction b)
{
  int x, y;
  x = a.num * b.den;
  y = b.num * a.den;
  if(x<y){return a;}
  return b;
}

fraction smallest_of_three(fraction a,fraction b,fraction c)
{
  fraction min={0,0};
  min = smallest(min,a);
  min = smallest(min,b);
  min = smallest(min,c);
  return min;
}

void output(fraction a,fraction b,fraction c,fraction smallest)
{
  printf("The smallest of %d/%d , %d,%d and %d/%d is %d/%d.\n",a.num,a.den,b.num,b.den,c.num,c.den,smallest.num,smallest.den);
}

void main()
{
  fraction a=input_fraction(),b=input_fraction(),c=input_fraction();
  fraction small=smallest_of_three(a,b,c);
  output(a,b,c,small);
}
