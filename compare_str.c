//accept string from user and check str1 is same with str2
//this program is-->>>>> case-sensetive

#include<stdio.h>
#define MAX 100
#define TRUE 1
#define FALSE 0
int chmstr(const char *str1,const char *str2);

int main()
{
  char arr[MAX];
  char brr[MAX];

 printf("Enter str1\n");
 scanf("%s",arr);
 printf("Enter str2\n");
 scanf("%s",brr);
 int ret=chmstr(arr,brr);
  if(ret==TRUE)
  {
    printf("TRUE\n");
  }
  else
  {  
    printf("FALSE\n");
  }
  return 0;
}

int chmstr(const char *str1,const char *str2)
{
  if(str1==NULL || str2==NULL)
  {
    return FALSE;
  }
  
  while((*str1 != '\0')&&(*str2 != '\0'))
  {
        if(*str1 != *str2)
    	 {
    	   break;
    	 }
    	 
    	 str1++;
    	 str2++;
  }
  
  if((*str1=='\0') && (*str2=='\0'))
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
 } 

