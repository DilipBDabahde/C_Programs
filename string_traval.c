#include<stdio.h>
#include<stdlib.h>
 int fun(char *str)
 {
   char *fun;
   fun=str;
   int icnt=0;
   while(*str != '\0')
   { 
     icnt++;
     str++;
   }
   
   str=fun;
   
   for(int i=1;i<=icnt;i++)
    {
      for(int j=1;j<=i;j++,str++)
      { 
        printf("%c ",*str);
       }  printf("\n");
      str=fun;
    }printf("\n");   
 }
 
 int main()
 {
 
  char *str=NULL;
  str=(char *)malloc(sizeof(char));
  
  printf("Enter string\n");
  scanf("%[^'\n']s",str);
  fun(str);
  return 0;
 }
 
 
