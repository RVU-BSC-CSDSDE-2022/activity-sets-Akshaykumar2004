#include<stdio.h>
#include<string.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string,int no_words);

void input_string(char *a)
{
  printf("Enter the string:\n");
  scanf("%[^\n]s",a);
}

int count_words(char *string)
{
  char copystr[100];
  strcpy(copystr,string);
  
  char * word;
  char delimeter[] = " ,.-";
  int count = 0;
  
  word = strtok(copystr,delimeter);
  while(word != NULL)
    {
      count = count + 1;
      word = strtok(NULL,delimeter);
    }
  return count;
}

void output(char *string,int no_words)
{
  printf("The number of words in \"%s\" is %d\n",string,no_words);
}

void main()
{
  char str[1000];
  input_string(str);
  int res = count_words(str);
  output(str,res);
}