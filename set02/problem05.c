#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
void main(){
  int a,b,gcd;
  a=input();
  b=input();
  gcd=find_gcd(a,b);
  output(a,b,gcd);
}
int input(){
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  return n;
}
int find_gcd(int a,int b){
  while( a != b){   // Euclidean algorithm method
    if(a > b){
      a = a-b;
        }else{
      b = b-a;
        }
  return (a,b);
  }
}
void output(int a,int b,int gcd){
  printf("the gcd of %d and %d is %d\n",a,b,gcd);
}