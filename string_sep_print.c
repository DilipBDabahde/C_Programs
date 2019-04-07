#include<stdio.h>

void dis(char *str)
 {
     while(*str != 0)
     {
       printf("%c\n",*str);
       str++;
     } 
 }
 
 int main()
 {
   char str[20];
   printf("Enter string\n");
   scanf("%[^'\n']s",str);
   dis(str);
  
   return 0;
 }
