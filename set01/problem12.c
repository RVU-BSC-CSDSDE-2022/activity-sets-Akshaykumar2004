#include<stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex complex;

int get_n();
void input_n_complex(int n, complex c[n]);
complex add_n_complex(int n, complex c[n]);
void output(int n, complex c[n], complex result);

void main(){
  int n=get_n();
  complex c[n],res;
  input_n_complex(n,c);
  res=add_n_complex(n,c);
  output(n,c,res);
}
int get_n(){
  int n;
  printf("enter the number of arrays:");
  scanf("%d",&n);
  return n;
}
void input_n_complex(int n,complex c[n]){
  for(int i=0;i<n;i++){
    printf("enter a complex number:");
    scanf("%f%f",&c[i].real,&c[i].imaginary);
  }
}
complex add_n_complex(int n,complex c[n]){
  complex sum={0,0};
  for(int i=0;i<n;i++){
    sum.real=sum.real+c[i].real;
    sum.imaginary=sum.imaginary+c[i].imaginary;
  }return sum;
}
void output(int n,complex c[n],complex result){
  printf("the sum of ");
  for(int i=0;i<n;i++){
    if(i<n-1){
      printf("%.2f+%.2fi and",c[i].real,c[i].imaginary);
    }else{
      printf("%.2f+%.2fi is",c[i].real,c[i].imaginary);
    }
  }printf(" %.2f+%.2fi\n",result.real,result.imaginary);
}