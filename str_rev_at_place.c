//accept string and revere in_place
//
//  input = "Rambabu"   output="ubabmaR"

#include<stdio.h>
#include<stdlib.h>

void str_rev_at_place(char *str_rev)
 {
   if(str_rev == NULL)
   {
    return;   
   }
   
   while(*str_rev != '\0')
   {
     str_rev++;
   } 
   str_rev--;   
   while(*str_rev != '\0')
   {
     printf("%c",*str_rev);
     str_rev--;
   }
   printf("\n");
 }
 
 int main()
 {
   char *ptr=NULL;
   ptr=(char *)calloc(50,sizeof(char));
   printf("Enter string\n");
   scanf("%[^'\n']s",ptr);
   str_rev_at_place(ptr);
   return 0; 
 }
