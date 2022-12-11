#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
void main(){
  float x1,x2,x3,y1,y2,y3;
  int res;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  res=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,res);
  //printf("%d\n",res);
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
  printf("enter point 1 of a triangle:");
  scanf("%f%f",x1,y1);
  printf("enter point 2 of a triangle:");
  scanf("%f%f",x2,y2);
  printf("enter point 3 of a triangle:");
  scanf("%f%f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
  float area;
  area=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
 // printf("%f\n",area);
  if(area > 0){
    return 1;
  }else{
    return 0;
  }
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){
  printf("the points (%.2f,%.2f),(%.2f,%.2f) and (%.2f,%.2f) ",x1,y1,x2,y2,x3,y3);
  if(result==1){
    printf("do form a triangle\n");
  }else{
    printf("do not form a triangle\n");
  }
}
