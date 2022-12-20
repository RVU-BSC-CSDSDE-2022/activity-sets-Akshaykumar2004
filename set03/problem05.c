#include<stdio.h>

int input_array_size();
void init_array(int n,int a[n]);
void erotosthenes_sieve(int n,int a[n]);
void output(int n,int a[n]);

void main(){
  int n=input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  output(n,a);
}
int input_array_size(){
  int n;
  printf("enter the last number:");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n]){
  for(int i = 2;i<=n;i++){
    // printf("%d-",i);
    a[i] = i;
  }
}
void erotosthenes_sieve(int n,int a[n]){
  int i=2;
  while( i <= n){
    if(i != a){
      a[i] = a[i];
      for(int j = i*i ; j<=n;j = j+i){
        // printf("j : %d-",j);
        a[j]=0;
        // break;
        // j+i;
        // break;
      }
    }i++;
  }
}
void output(int n, int a[n]){  
  if(n>1){
  printf("the prime numbers between 2 to %d is ",n);
  for(int i=2;i<=n;i++){
    if(a[i] > 0){
      printf("%d,",a[i]);
    }
  }printf("\n");
    }else{
    printf("enter valid number,your number should be more than 2.");
    }
}