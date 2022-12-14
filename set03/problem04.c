#include<stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
void main(){
  int a,pos;
  a=input();
  pos=find_fibo(a);
  output(a,pos);
}
int input(){
  int n;
  printf("enter a number to search:");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n){
  int num,f_list[n+5];
  for(int i=0;i<n+5;i++){
  if(i<2) {
   f_list[i]=i;
      }
  else{
    f_list[i]=f_list[i-1]+f_list[i-2];
    if(f_list[i] == n){
      return i;
      break;
    }
    }
   
  //f_list[i] = num;
//printf("%d, ",f_list[i]);
//i++;
}
}
  

void output(int n,int fibo)
{
  printf("fibo(%d) = %d\n",n,fibo);
}