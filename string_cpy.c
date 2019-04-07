//accept string into one array and copy that string into another array
//
//  str1="Dilip"  ;; this string we have to copy into anoter another character array  str2="Dilip"


#include<stdio.h>
#include<stdlib.h>

void strx(char *str1,char *str2);

int main()
 {
   char *cptr=NULL;
   char *cptr1=NULL;
   cptr=(char *)malloc(sizeof(char));  
   
   cptr1=(char *)malloc(sizeof(char)); 
    
   printf("Enter  string 1\n");
   scanf("%[^'\n']s",cptr);
   strx(cptr,cptr1);
   return 0;
 }
 
 void strx(char *str1,char *str2)
 {
       
    while(*str1 != '\0')
    {
        *str2=*str1;   
   
        str1++;
        str2++;
    }    
    str2--;
    while(*str2 != '\0')
   {      
    str2--;
   }
   str2++;
   printf("contents of str2\n");
   while(*str2 != '\0')
   {
   printf("%c",*str2);
   str2++;
   }
  
    printf("\n");
 }

