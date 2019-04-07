//accept string array from user and print capital letters from string array example  {{ sizE=='E' }}

#include<stdio.h>


int capstr(char *str);

int main()
{
  
   char arr[20];
                                                                 //cap_char_print.c
 printf("Enter  String :\n");

   scanf("%[^'\n']s",arr);  //DoN 
   
   capstr(arr);
   
}

int capstr(char *str)
 {
 
   int i=0;
    while(*str != '\0') 
   { 
    int icnt=0;
    if(*str>='A' && *str<='Z')
    {
      printf("%c ",*str);
      icnt++;
    }   str++;
   } 
    printf("\n"); 
 }
