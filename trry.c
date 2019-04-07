//accept string from user and print that strng is palindrom or not

#include<stdio.h>
#define MAX_SIZE 100
#define TRUE 1
#define FALSE 0
int  check_pal(char *str);

int main()
{

   char arr[MAX_SIZE];
   printf("ENTER STRING TO CHECK IT IS PALINDROM OR NOT\n");
   scanf("%[^'\n']s",arr);

   int ret=check_pal(arr);
   if(ret==TRUE)
  {
    printf("Enter string is -->>>> PALINDROM <<--\n");
  }
  else
  {
    printf("Enter string is not -->>>> PALINDROM <<--\n");
  }
  return 0;
}

int check_pal(char *str)
{
  //need to ptr
  char *start=str,*end=str;
  
  //traver end to till \0 come one step back again
  while(*end !='\0')
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
