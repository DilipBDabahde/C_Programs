//accept str from user and return length
#include<string.h>
#include<stdio.h>
int len(char *str);
int main()
{
  char ch[50];
  printf("Enter str len:\n");
  scanf("%[^'\n']s",ch);
  int ret=len(ch);
  printf("str len is-->>%d\n",ret);
  return 0;
}

int len(char *str)
{
  int icnt=0;
  
 // icnt=strlen(str);  //readymade function  <<<<<<<<<<----------------------------------------------------
  
  while(*str !='\0')
  {
     icnt++;
     str++;
  }
  return icnt;

}
