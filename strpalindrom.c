//accept string from user and display string is palindrom or not
//ABCDCBA   -->> palindrom
//ABCBCA	-->>not palindrom

#include<stdio.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
int palindromstr(char *str);
int main()				//main fun  entry point func
{
   char arr[50];
   printf("Enter string\n");
   scanf("%[^'\n']s",arr);							//ABCBA
 
   int ret=palindromstr(arr);
   if(ret==1)
   {
     printf("given num is --->>palindrom\n");
   }
   else
   {
     printf("given num is not----->>palindrom\n");
   }
}


int palindromstr(char *str)
{
    char *start,*end;
    start=str;
    end=str;

    while(*end != '\0')
    {
      end++;    
    }
    end--;
    
    while(start<=end)
     {
       if(*start != *end)
       {
        break;
       }
	 start++;
	 end--;
     }
     
     if(start>end)
      {
       return TRUE;
      }
      else
      {
        return FALSE;
      }
         
}
