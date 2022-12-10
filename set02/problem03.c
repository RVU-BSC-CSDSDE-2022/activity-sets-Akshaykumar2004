#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

void main(){
  int n,res;
  n=input_number();
  res=is_composite(n);
  output(n,res);
}

int input_number(){
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  return n;
}

int is_composite(int n){
  int i,res;
  for(i=2;i<n;i++){
    res= n % i;
    if( res == 0){
      return 1;
      break;
    }else{
      return 0;
      }
    }
}
void output(int n,int result){
  if(n<2)
  {
     printf("%d is not a composite number",n);
  } else
  {  
    if(result==1){
  printf("%d is  a composite number",n);
    }else{
      printf("%d is not a composite number",n);
    }
  }
  }  