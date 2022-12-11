#include<stdio.h>
#include<math.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

void main(){
  float x1,x2,y1,y2,d;
  input(&x1,&x2,&y1,&y2);
  d=find_distance(x1,y1,x2,y2);
  output(x1,y1,x2,y2,d);
}
void input(float *x1,float *x2,float *y1,float *y2){
  printf("enter x and y values of point one:");
  scanf("%f%f",x1,y1);
  printf("enter x and y values of point two:");
  scanf("%f%f",x2,y2);
}
float find_distance(float x1, float y1, float x2, float y2){
  float d;
  d=sqrt((x2-x1)+(y2-y1));
  return d;
}
void output(float x1, float y1, float x2, float y2, float distance){
  printf("The distance between point (%.2f,%.2f) and (%.2f,%.2f) is %.2f\n",x1,y1,x2,y2,distance);
}