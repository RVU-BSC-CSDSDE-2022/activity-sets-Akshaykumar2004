#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} triangle;
int input_n();
void input_n_triangles(int n, triangle t[n]);
void find_n_areas(int n, triangle t[n]);
triangle find_smallest_triangle(int n, triangle t[n]);
void output(int n, triangle t[n], triangle smallest);
void main(){
  int n=input_n();
  triangle a[n],small;
  input_n_triangles(n,a);
  find_n_areas(n,a);
  small=find_smallest_triangle(n,a);
  output(n,a,small);
}
int input_n(){
  int n;
  printf("enter the number of triangle's: ");
  scanf("%d",&n);
  return n;
}
void input_n_triangles(int n,triangle t[n]){
  for(int i;i<n;i++){
    printf("enter the details of triangle %d :",i+1);
    scanf("%f%f",&t[i].base,&t[i].altitude);
  }
}
void find_n_areas(int n,triangle t[n]){
  for(int i=0;i<n;i++){
  t[i].area = 0.5 * t[i].base * t[i].altitude;
  }
}
triangle find_smallest_triangle(int n, triangle t[n]){
  triangle smallest={0,0,0};
  for(int i=0;i<n;i++){
    if((smallest.area == 0 ) || (smallest.area > t[i].area)){
      smallest = t[i];
    }else{
      i++;
    }
  }
  return smallest;
}
void output(int n,triangle t[n],triangle smallest){
  printf("The smallest triangle out of triangles with base and height ");
  for(int i=0;i<n;i++){
    printf("(%.2f,%.2f), ",t[i].base,t[i].altitude);
  }printf("is the triangle having base %.2f, height %.2f and area %.2f\n",smallest.base,smallest.altitude,smallest.area);
}