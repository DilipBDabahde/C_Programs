//accept character freq 
#include<stdio.h>
 int fre(char *str,char ch);
 
 int main()
 {
 
   char str[50];
  
   printf("Enter string\n");
   scanf("%[^'\n']s",str);
   char ch='A';
   
   
   fre(str,ch);
   return 0;
 }
 
 int fre(char *str,char ch)
 {
    int icnt=0;
    
    while(*str != '\0')
    {
      if(*str>='a' && *str>='z' || *str>='A' && *str>='Z' )
      {
        if(*str==ch)
        {
          icnt++;
        }
      }
     str++;
    }
  printf("%d\n",icnt);
 }
