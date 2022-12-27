#include<stdio.h>
//#include<string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
void main(){
  char str[1000],rev_str[1000];
  input_string(str);
  str_reverse(str,rev_str);
  output(str,rev_str);
}
void input_string(char *a){
  printf("enter a string: ");
  scanf("%s",a);
}
void str_reverse(char *str,char *rev_str){
  int n=str_len(str);
  for(int i=0;i<n;i++){
    rev_str[i] = str[(n-1) - i];
  }
}
int str_len(char *str){
  int count=0;
  for(int i=0;str[i] != '\0';i++){count+=i;}
}
void output(char *a,char *reverse_a){
  printf("the string entered by you is '%s',after reversing '%s'\n",a,reverse_a);
}
