#include<stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

void main(){
  int a,b,c,max;
  a=input();
  b=input();
  c=input();
  compare(a,b,c,&max);
  output(a,b,c,max);
}
int input(){
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  return n;
}
void compare(int a,int b,int c,int *max){
  int step1 =((a>c) ? a: c),step2=((b>c)? b:c);
  *max = (a>b) ? step1: step2; //((a>c) ? a: c) : ((b>c)? b:c);
  }

void output(int a,int b,int c,int max){
  printf("the largest of %d,%d and %d is %d\n",a,b,c,max);
}