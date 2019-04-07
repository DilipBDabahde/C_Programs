//acceppt string from user and print that string reverse

#include<stdio.h>
#include<stdlib.h>

char reverstr(char *str)
 {
    char *cj;
    cj=str;
    
    while(*cj != '\0')
    {
        cj++;   
    }
      cj--;
    str=cj;
    
    while(*str!='\0')  
     {
       printf("%c ",*str);
       str--;
     }
 
 }

int main ()
{ 
   char *str;
   str=(char*)malloc(sizeof(char));
   printf("Enter string:");
   scanf("%[^'\n']s",str);
   reverstr(str);
   printf("\n");
   return 0;
}
