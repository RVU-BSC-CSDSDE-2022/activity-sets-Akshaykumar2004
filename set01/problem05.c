#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main(){
  int a,b,c,max;
  a=input();
  b=input();
  c=input();
  max=compare(a,b,c);
  output(a,b,c,max);
}
int input(){
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  return n;
}
int compare(int a,int b,int c){
int max=b;
  if(a>b){max = a;}
  if(c>max){max=c;}
  return max;
}
void output(int a,int b,int c,int max){
  printf("the largest of %d,%d and %d is %d\n",a,b,c,max);
}