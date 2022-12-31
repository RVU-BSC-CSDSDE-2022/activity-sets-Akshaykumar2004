#include<stdio.h>
#include<math.h>

void input_camel_detalis(float *radius,float *height,float *length);
int find_mood(float radius,float height,float length);
void output(float radius,float height,float length,int mood);

void input_camel_details(float *radius,float *height,float *length)
{
  printf("Enter the stomach radius of a camel:\n");
  scanf("%f",radius);
  printf("Enter the height:\n");
  scanf("%f",height);
  printf("Enter the length:\n");
  scanf("%f",length);
}

int find_mood(float radius,float height,float length)
{
  float r=radius,h=height,l=length;
  if((r<h) && (r<l)){return 1;}  // 1 == sick
  if((h<l) && (h<r)){return 2;}  // 2 == happy
  if((l<h) && (l<r)){return 3;}  // 3 == tense
  return 0;
}

void output(float radius,float height,float length,int mood)
{
  if(mood == 1)
  {
    printf("The camel is sick\n");
  }
  if(mood == 2)
  {
    printf("The camel is happy\n");
  }
  if(mood == 3)
  {
    printf("The camel is tense\n");
  }
}

void main()
{
  float r,h,l;
  input_camel_details(&r,&h,&l);
  int m = find_mood(r,h,l);
  output(r,h,l,m);
}


