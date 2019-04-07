//accept string from user and print its reverse
//
// exampe= input =ABCD   output=DCBA

#include<stdio.h>
#include<stdlib.h>


void str_reverse(char *str)
{
   while(*str != '\0')
   {
     str++;
   }
   str--;
   while(*str != '\0')
    {
      printf("%c",*str);
      str--;
    }
   printf("\n");
}

int main()
{
  char *ptr=NULL;
  ptr=(char*)malloc(sizeof(char));
  
  printf("Enter string\n");
  scanf("%[^'\n']s",ptr);
  
 str_reverse(ptr);
 return 0;
}
