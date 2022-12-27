#include<stdio.h>
#include<string.h>
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

void main()
{
  char string[1000],sub[100];
  input_string(string,sub);
  int index=sub_str_index(string,sub);
  // printf("%d\n",index);
  output(string,sub,index);
}
void input_string(char* a,char* b)
{
  printf("enter the string:");
  scanf("%s",a);
  printf("enter the substring:");
  scanf("%s",b);
}
int sub_str_index(char* string, char* substring)
{
  int start=0,end=0;
  while(start < strlen(string))
  {
    if(string[start+end] != substring[end])
    {
      start = start+1;
      end = 0;
      continue;
    }
    end = end + 1;
    if(end == strlen(substring))
    {
      return start;
    }
  }return -1;
}
void output(char *string, char *substring, int index)
{
  printf("The index of \"%s\" in \"%s\" is %d\n",substring,string,index);
}