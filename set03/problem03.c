#include<stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);
void main(){
  int a,res;
  a=input_number();
  res=is_prime(a);
  output(a,res);
}
int input_number(){
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  return n;
}
int is_prime(int n){
  int result=0;
  for(int i=0;i<n;i++)
  {
    while((i>0) && (i<n))
    {
      result= n % i;
      if(i>1)
      {
        if(result == 0)
        {
          return 0;
          break;
        }
        else
        {
          return 1;
        }
        }
      else
      {
        i++;
      }
    }
  }
}
void output(int n,int result){
  if(result == 1){
    printf("%d is a prime number\n",n);    
  }else{
    printf("%d is not a prime number\n",n);
  }
}