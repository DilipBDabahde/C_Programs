// print this pattern
// Demo
// D * * *
// D e * *
// D e m *
// D e m o


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
      for(int j=1;j<=icnt;j++,str++)
      { 
        if(i>=j)
        {
        printf("%c ",*str);
        }
        else 
        {
         printf("* ");
        }       
     } printf("\n");
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
 
 
