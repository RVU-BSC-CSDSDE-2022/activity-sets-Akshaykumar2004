#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
void main(){
  int n=input_array_size();
  int a[n],sum;
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  output(sum);  
}
int input_array_size(){
  int n;
  printf("enter the size of the array:");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n]){
  for(int i=0;i<n;i++){
    printf("enter the number:");
    scanf("%d",&a[i]);
  }
}
int sum_composite_numbers(int n,int a[n]){
  int sum,i,is_comp;
  for(i=0;i<n;i++){
    is_comp=is_composite(a[i]);
    if(is_comp == 1){
      sum=sum+a[i];
    }else{
      sum=sum;
    }
  }return sum;
}


int is_composite(int n)
{  
  int i,res;
  {
     for(i=0;i<n;i++)
     {
       while((i>0) && (i<n))
       {
        res= n % i;
        if(i>1)
        {
          if( res == 0)
          {
            return 1;
            break;
          }
          else
          {
            return 0;
          }
      }
      else
      {
        i=i+1;
      }
     }
    }
   }
}

void output(int sum){
  printf("the sum of all composites is %d",sum);
}