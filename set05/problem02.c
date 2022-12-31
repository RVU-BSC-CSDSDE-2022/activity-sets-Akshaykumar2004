#include<stdio.h>
#include<math.h>

void input_camel_details(float *radius,float *height,float *length);
float find_weight(float radius,float height,float length);
void output(float radius,float height,float length,float weight);

void input_camel_details(float *radius,float *height,float *length)
{
  printf("Enter the stomach radius of a camel:\n");
  scanf("%f",radius);
  printf("Enter the height:\n");
  scanf("%f",height);
  printf("Enter the length:\n");
  scanf("%f",length);
}

float find_weight(float radius,float height,float length)
{
  float pi,weight;
  pi=3.14;
  weight = pi * pow(radius,3) * sqrt( height * length);
  return weight;
}

void output(float radius,float height,float length,float weight)
{
  printf("The weight of the camel with radius: %.2f , height: %.2f , length : %.2f is %.2f\n",radius,height,length,weight);
}

void main()
{
  float r,h,l,w;
  input_camel_details(&r,&h,&l);
  w=find_weight(r,h,l);
  output(r,h,l,w);
}