//accept str from user and covert str into smallcase

#include<stdio.h>
void small(char *str);
void upper(char *str);
int main()
{

  char str[50];
  printf("Enter string\n");
  scanf("%[^'\n']s",str);
  
       printf("small-->>");
  small(str);
  upper(str);
  return 0;
}

void small(char *str)
{
   while(*str != '\0')
   {
     if(*str>='A' && *str<='Z')
     {
       *str=*str+32;
     }     
     printf("%c",*str); 
     str++;
   }
       printf("\n");
       printf("capital-->>");
}

void upper(char *str)
{
   while(*str != '\0')
   {
     if(*str>='a' && *str<='z')
     {
       *str=*str-32;
     }     
     printf("%c",*str); 
     str++;
   }
       printf("\n");
}
