#include<stdio.h>

void input(char *name);
int has_nice_name(char *c);
void output(int res);

void input(char *name)
{
  printf("Enter the name of camel : ");
  scanf("%[^\n]s",name);
}

int has_nice_name(char *c)
{
  int i,count_c=0,count_v=0;
  for(i=0;c[i]!= '\0';i++)
    {
      if((c[i] == 'a') || (c[i] =='e') || (c[i] =='i') || (c[i] =='o') || (c[i] =='u'))
      {
        count_v= count_v + 1;
        continue;
      }
        count_c = count_c + 1;    
    }
  if((count_c>1) && (count_v>1)){return 1;}
  return 0;
}

void output(int res)
{
  if(res == 1)
    printf("The camel has a nice name.\n");
  if(res == 0)
    printf("The camel does not have a nice name.\n");
}

void main()
{
  char name[100];
  input(name);
  int res=has_nice_name(name);
  output(res);
}