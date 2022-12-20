#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

void main(){
  int n,sum;
  n=input_n();
  sum=sum_n_nos(n);
  output(n,sum);
}
int input_n(){
  int n;
  printf("enter a natural number:");
  scanf("%d",&n);
  return n;
}
int sum_n_nos(int n){
  if(n>0){
    return n+sum_n_nos(n-1);
  }
  else{
    return 0;
  }
}
void output(int n,int sum){
  printf("the sum of all natural numbers till %d is %d\n",n,sum);
}