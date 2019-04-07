//accept two string from user and check that is same of not use strcmp function
//
// exmaple=  str1=abcd		str2=abcd  ==true
//		 str1=abcd		str2=abcde	==false
//

#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define MAX 100

int cmpstr(char *str1,char *str2);
int main()
{
  char arr[MAX];
  char brr[MAX];

  printf("Enter Str1\n");
  scanf("%s",arr);

  printf("Enter Str2\n");
  scanf("%s",brr);
  int ret=cmpstr(arr,brr);
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

int cmpstr(char *str1,char *str2)
{
   while(*str1 != '\0' && *str1 != '\0')
   {
      if(*str1 != *str2)
      {
        break;
      }
      str1++;
      str2++;   
   }
   if(str1>str2)
   {
     return TRUE;
   }
   else
   {
     return FALSE;
   }
}
