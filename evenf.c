#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
/*
BOOL evenf(char val)
 {
   if(val=='A'|| val=='E'||val=='I'||val=='O'||val=='U'||val=='a'||val=='e'||val=='i'||val=='o'|| val=='u') 
   {
     return  TRUE;
   }
   else
   { 
     return FALSE;
   }
 }*/
 
 BOOL evenf(char val)
 {
   switch(val)
   {
     
     case 'a':
     return TRUE;
     break;
     
     case 'e':
     return TRUE;
     break;
     
     case 'i':
     return TRUE;
     break;
         
     case 'o':
     return TRUE;
     break;
     
     
     case 'u':
     return TRUE;
     break;
     

     case 'A':
     return TRUE;
     break;
         
     case 'E':
     return TRUE;
     break;        
        
     case 'I':
     return TRUE;
     break;
     
     case 'O':
     return TRUE;
     break;
     
     
     case 'U':
     return TRUE;
     break; 
     
     default:
     return FALSE;
        
   }
 
 }
 
 
int main()
 {
 
   char val='\0';
   int iret=0;
   printf("Enter a num\n");
   scanf("%c",&val);
   iret=evenf(val);
   if(iret==TRUE)
   {
    printf("TRUE\n");
   }
   else
   {
    printf("FALSE\n");
   }   
   return 0;
 } 
