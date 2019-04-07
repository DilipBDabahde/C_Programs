//accept str from user and covert str into smallcase

#include<stdio.h>
void convert(char *str);

int main()
{

  char str[50];
  printf("Enter string\n");
  scanf("%[^'\n']s",str);
  convert(str);
  return 0;
}

void convert(char *str)
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
}
