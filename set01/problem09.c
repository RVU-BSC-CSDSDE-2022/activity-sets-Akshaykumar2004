#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);

void main(){
  float n,sqr_rt;
  n=input();
  sqr_rt=square_root(n);
  output(n,sqr_rt);
}

float input(){
  float n;
  printf("enter a float number:");
  scanf("%f",&n);
  return n;
}

float square_root(float n){
  float x,res,sqr;
  res=1;
  while( 1 ){//(sqr*sqr) != n){
    x=0.5*(res+(n/res));
    if(x == res){
      sqr = x;
      break;
    }else{
      res = x;
    }
  }return sqr;
}

void output(float n,float sqrroot){
  printf("the square root of %.2f is %.2f\n",n,sqrroot);
}