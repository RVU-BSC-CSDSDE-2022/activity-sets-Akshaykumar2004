#include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

void main(){
  char str_1[1000],str_2[1000];
  int result;
  input_two_strings(str_1,str_2);
  result=stringcompare("","");//str_1,str_2);
  // printf("%d\n",result);
  output(str_1,str_2,result);
}
void input_two_strings(char *string1,char *string2)
{
  printf("enter string 1:");
  scanf("%s",string1);
  printf("enter string 2:");
  scanf("%s",string2);
}
int stringcompare(char *string1, char *string2){
  int res=75;
  if((string1[0] == '\0') || (string2[0] == '\0' )){
    res = 0;
  }else{
    {for(int i=0;(string1[i] != '\0')||(string2[i] != '\0');i++){
      res = (string1[i]<string2[i])? 2:(string1[i]>string2[i])? 1: 0;
    if(res>0){
      break;
    }
  }
      }
    }
  return res;
  }

void output(char *string1,char *string2 ,int result){
  printf("reslt = %d\n",result);
  if(result == 0){
    printf("the two strings are equal");
  }
  else if(result == 1)
  {
    printf(" %s is greater than %s\n ",string1,string2);
  }else {
    printf(" %s is greater than %s\n",string2,string1);
  }
}