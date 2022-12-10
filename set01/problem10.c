#include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

void main(){
  char str_1[1000],str_2[1000];
  int result;
  input_two_strings(str_1,str_2);
  result=stringcompare(str_1,str_2);
  output(str_1,str_2,result);
}
void input_two_strings(char *string1,char *string2)
{
  printf("enter string 1:");
  scanf("%s",string1);
  printf("enter string 2:");
  scanf("%s",string2);
}
int stringcompare(char *string1,char *string2)
{
  printf("string01=%s\nstring02=%s\n",string1,string2);
  int i=0,res=0;
  while(( *string1 != "\0")&&( *string2 != "\0"))
  {
    if(string1[i] < string2[i])
    {
    res = 2;
    break;
  }
    else if(string1[i] > string2[i])
    {
    res = 1;
    break;
  }
    else
    {
    res=0;
    break;
  }i++;
    }
  return res;
}
void output(char *string1,char *string2 ,int result){
  printf("reslt=%d",result);
  if(result == 0){
    printf("the two strings are equal");
  }else if(result == 1){
    printf(" %s is greater than %s\n ",string1,string2);
  }else {
    printf(" %s is greater than %s\n",string2,string1);
  }
}