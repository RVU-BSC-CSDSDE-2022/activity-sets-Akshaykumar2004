#include<stdio.h>
#include<math.h>

struct camel_{
float radius,height,length,weight;
};

typedef struct camel_ camel;

camel input();
void findweight(camel *c);
void output(camel c);

camel input()
{
  camel a;
  printf("Enter the stomach radius:\n");
  scanf("%f",&a.radius);
  printf("Enter the height:\n");
  scanf("%f",&a.height);
  printf("Enter the length:\n");
  scanf("%f",&a.length);
  return a;
}

void findweight(camel *c)
{
  float pi = 3.14;
  c->weight= pi * pow(c->radius,3) * sqrt(c->height * c->length);
}

void output(camel c)
{
  printf("The weight of the camel with radius: %.2f, height: %.2f, length: %.2f is %.2f\n",c.radius,c.height,c.length,c.weight);
}

void main()
{
  camel c=input();
  findweight( &c);
  output( c);
}
