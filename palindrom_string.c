#include<stdio.h>
#define TRUE 1
#define FALSE 0
int palindromstr(char *str);  //fun declaration
int main()				//main fun  entry point func
{
   char arr[50];
   printf("Enter string\n");
   scanf("%[^'\n']s",arr);     
  								//ABCBA
 
 int ret=palindromstr(arr);
  if(ret==0)
  {
  printf("String is palindrom\n");
  }
  else
  {
   printf("String is --not-- palindrom\n");
  }
}

int palindromstr(char *str)   //fun definition
{  
   char *src,*dst;
   char temp;
   src=str;
   dst=str;

   while(*dst != '\0')
   {
     dst++;
   }
      
   dst--;
   
   while(src<dst)
   {
     if(*src != *dst)
     {   
     break;
     }
     
     src++;
     dst--;  
  
   
   if(src > dst)
   {
     return TRUE;     
   }
   else
   {
     return FALSE;
   }
   }
}
