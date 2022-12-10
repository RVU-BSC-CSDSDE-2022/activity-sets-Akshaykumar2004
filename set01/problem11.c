#include<stdio.h>
struct _complex {
	float real;
	float imaginary;
};
typedef struct _complex complex;

complex input_complex();
complex add_complex(complex a, complex b);
void output(complex a, complex b, complex sum);

void main(){
  complex a,b,sum;
  a=input_complex();
  b=input_complex();
  sum=add_complex(a,b);
  output(a,b,sum);
}
complex input_complex(){
  complex a;
  printf("enter a complex number:");
  scanf("%f%f",&a.real,&a.imaginary);
  return a;
}
complex add_complex(complex a,complex b){
  complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}
void output(complex a,complex b,complex sum){
  printf("the sum of %.2f+%.2fi and %.2f+%.2fi is %.2f+%.2fi)\n",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}