#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

void main(){
  int n=input_array_size();
  int sum,a[n];
  input_array(n,a);
  sum=sum_n_array(n,a);
  output(n,a,sum);
}
int input_array_size(){
  int n;
  printf("enter the size of the array:");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n]){
  printf("enter the lements of array:");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
}
int sum_n_array(int n, int a[n]){
  int sum=0;
  for(int i=0;i<n;i++){
    sum=sum+a[i];
  }
  return sum;
}
void output(int n,int a[n],int sum){
  for(int i=0;i<n;i++){
    if(i<n-1){
      printf("%d+",a[i]);
    }else{
      printf("%d=",a[i]);
    }
  }printf("%d",sum);
}
