//check_repeat_char_freq.c

#include<string.h>
#include<stdio.h>
int len(char *str);
int main()
{
  char ch[50];
  

  printf("Enter str :\n");
  scanf("%[^'\n']s",ch);
  int ret=len(ch);
  printf("str len is-->>%d\n",ret);
  return 0;
}

int len(char *str)
{
  int icnt=0;
  
 // icnt=strlen(str);  //readymade function  <<<<<<<<<<----------------------------------------------------
  
  char ch1;
  printf("Enter a chare\n");
  scanf("%c",&ch1);
  
  while(*str !='\0')
  {   
      if(*str==ch1)
      {
        icnt++;
      }  
     str++;
  }
  return icnt;

}
