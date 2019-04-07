//accept string from uesr and print small character 
// print small chars of string
// Dilip    output ->>>ilip
//
#include<stdio.h>

 int small_str(char *str)
 {
    while(*str != '\0')
    {
      if(*str>='a' && *str<='z')
      {
        printf("%c ",*str);
      }
      str++;
    }
    printf("\n");
 }
 
 
 int main()
 {
   int size=0;
   
   char str[20];
   
   printf("Enter string now\n");
   scanf("%[^'\n']s",str);
   
   small_str(str);
   return 0;
 }
