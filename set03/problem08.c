#include<stdio.h>
#include<math.h>

typedef struct point{
float x,y;
} point;

typedef struct side{
point p1,p2;
} side;

typedef struct polygon{
side sides[100];
point points[100];
float perimeter;
} polygon;

int input_n()
{
  int n;
  printf("enter the number of sides:\n");
  scanf("%d",&n);
  return n;
}

point input_point(int i)
{
  point a;
  printf("enter the cordinates of point %d (x,y) :\n",i);
  scanf("%f%f",&a.x,&a.y);
  return a;
}

int input_n();
point input_point();
void initialize_sides(int n,polygon *p);
float find_distance(point a,point b);
void find_perimeter(int n,polygon *p);
void output(polygon p);

void main()
{
  int n=input_n();
  polygon p;
  initialize_sides(n,&p);
  find_perimeter(n,&p);
  output(p);
  }
void initialize_sides(int n,polygon *p)
{
  for(int i=0;i<n;i++)
    {
      p->points[i]=input_point(i+1);
    }
  p->sides[0].p1.x=p->points[0].x;
  p->sides[0].p1.y=p->points[0].y;
  p->sides[0].p2.x=p->points[1].x;
  p->sides[0].p2.y=p->points[1].y;
 
  for(int i=1;i<n;i++)
    {
      p->sides[i].p1.x=p->points[i].x;
      p->sides[i].p1.y=p->points[i].y;
      p->sides[i].p2.x=p->points[i+1].x;
      p->sides[i].p2.y=p->points[i+1].y;      
    }
   p->sides[n-1].p2.x=p->points[0].x;
   p->sides[n-1].p2.y=p->points[0].y;
  }

float find_distance(point a,point b)
{
  return sqrt(pow((a.x - b.x),2)+pow((a.y - b.y),2));
}

void find_perimeter(int n,polygon *p)
{
  for(int i=0;i<n;i++)
    {
       p->perimeter= p->perimeter + find_distance(p->sides[i].p1,p->sides[i].p2);
    }
  }

void output(polygon p)
{
  printf("The perimeter of a polynomial is %.3f\n",p.perimeter);
}

