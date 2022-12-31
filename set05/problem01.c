#include<stdio.h>
#include<math.h>
struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

Point input()
{
  Point a;
  printf("enter a point(x,y):\n");
  scanf("%f%f",&a.x,&a.y);
  return a;
}

void dist(Point a,Point b,float *res)
{
  float x= b.x-a.x, y= b.y - b.x;
  *res = sqrt(pow(x,2)+pow(y,2));
}
void output(Point a, Point b,float res)
{
  printf("the distance between (%.2f,%.2f) and (%.2f,%.2f) is %.2f\n",a.x,a.y,b.x,b.y,res);
}

void main()
{
  Point a= input(),b= input();
  float d;
  dist(a,b,&d);
  output(a,b,d);
}