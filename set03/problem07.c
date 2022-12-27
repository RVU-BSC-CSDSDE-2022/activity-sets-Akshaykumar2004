#include<stdio.h>
#include<math.h>

typedef struct point{
float x,y;
} point;

typedef struct line{
point p1,p2;
float d;
} line;

point input_point();
line input_line();
void find_length(line *l);
void output(line l);

void main(){
  line a;
  a=input_line();
  find_length(&a);
  output(a);
}

point input_point()
{
  point p;
  printf("enter the values of a point:");
  scanf("%f%f",&p.x,&p.y); 
  return p;
}

line input_line()
{
  line a;
  printf("enter points of a line\n");
  a.p1=input_point();
  a.p2=input_point();
  return a;
}

void find_length(line *l)
{
  l->d = sqrt(pow((l->p2.x - l->p1.x),2)+pow((l->p2.y - l->p1.y),2));
}

void output(line l)
{
  printf("The distance between the points (%.2f,%.2f) and (%.2f,%.2f) is %.2f\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.d);
}