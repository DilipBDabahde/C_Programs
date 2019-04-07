

#include<stdio.h>

 int main()
 {
   char str[50]="and";
   char str1[50]="AND";
   
   while(*str != '\0' && *str1 != '\0')
   {
      if(*str != *str1)
      {
         if(*str>='A' && *str<='Z')
         {
           *str=*str+32;
         }
         else if(*str>='a' && *str<='z')
         {
           *str=*str-32;
         }
      }
      
      if(*str == *str1)
      {
        str++;
        str1++;
      }
   }
   
   if(*str=='\0' && *str1=='\0')
   {
     printf("True\");
   }
   else
   {
    printf("False\n");
   }
 }
