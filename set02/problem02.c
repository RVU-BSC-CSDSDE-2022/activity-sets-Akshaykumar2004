#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
void main(){
  int a,b,c,res;
  a=input_side();
  b=input_side();
  c=input_side();
  res=check_scalene(a,b,c);
  output(a,b,c,res);
  printf("%d",res);
}
int input_side(){
  int n;
  printf("enter a side of a triangle:");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c){
  if ((a != b)&&(b != c) && (c != a)){
    return 1;
      }else{
    return 0;
      }
}
void output(int a,int b,int c,int isscalene){
  if(isscalene == 1){
  printf("the triangle with sides of %d,%d and %d is scalene",a,b,c);
    }else{
  printf("the triangle with sides of %d,%d and %d is not scalene",a,b,c);
    }
}