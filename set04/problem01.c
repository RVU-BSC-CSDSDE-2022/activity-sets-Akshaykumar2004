#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1,int den1, int num2,int den2,int *res_num, int *res_den);
void output(int num1,int den1,int num2,int den2,int res_num,int res_den);

void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the 1st fractional number:\n");
  scanf("%i%i",num1,den1);
  printf("Enter the 2nd fractional number:\n");
  scanf("%i%i",num2,den2);
}

void add(int num1,int den1,int num2,int den2,int *res_num,int *res_den)
{
  if(den1 == den2){
    *res_num=num1+num2;
    *res_den=den1;
  }
  if(den1 != den2){
    *res_num=(num1*den2) + (num2*den1);
    *res_den= den1 * den2;
  }
}

void output(int num1,int den1,int num2,int den2,int res_num,int res_den)
{
  int gcd=gcd_(res_num,res_den);
  if(res_num == res_den){
    printf("The sum fractions is 1\n");
  }
  if(res_num != res_den){
    res_num=(res_num / gcd);
    res_den=( res_den / gcd);
    printf("%d/%d + %d/%d = %d/%d\n",num1,den1,num2,den2,res_num,res_den);
  }
}

int gcd_(int a,int b)
{
  while(a != b){
    if(a>b)
    {
      a=a-b;
    }
    if(b>a)
    {
      b=b-a;
    }
  }return a;
}

void main(){
  int num1,num2,resn,den1,den2,resd;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&resn,&resd);
  output(num1,den1,num2,den2,resn,resd);
}