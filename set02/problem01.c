#include<stdio.h>

void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

void main()
{  
  float b,h;
  input(b,h);
}

void input(float base,float height){
  float area;
  printf("enter the base and height of the triangle:");
  scanf("%f%f",&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
}
void find_area(float base , float height, float *area){
  *area= 0.5 * base * height;
 // printf("%f\n",area);
}
void output(float base,float height,float area){
  printf("the length of a triangle with a base of %.2fcm and height with %.2fcm is %.2fcm\n",base,height,area);
}