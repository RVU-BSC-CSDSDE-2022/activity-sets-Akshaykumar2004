#include<stdio.h>
struct _triangle {
	float base, altitude, area;
};

typedef struct _triangle triangle;

triangle input_triangle();
void find_area(triangle *t);
void output(triangle t);

void main(){
  triangle a;
  a=input_triangle();
  find_area(&a);
  output(a);
}
triangle input_triangle(){
  triangle t;
  printf("enter the base and altitude of a triangle:");
  scanf("%f%f",&t.base,&t.altitude);
  return t;
}
void find_area(triangle *t){
  t->area = 0.5 * t->base * t->altitude;
}
void output(triangle t){
  printf("The area of triangle with base = %.2f and altitude = %.2f is %.2f\n",t.base,t.altitude,t.area);
}