/*
Q.3 Write a recursive program which accept string from user and count number of
small characters.
Input : HElloWOrlD
Output : 5
*/

#include<stdio.h>

int small(char *arr) 
 {
    static int icnt=0;
    
    if(*arr != '\0')
    {
      if(*arr >='a' && *arr<='z')
      {
        icnt++;
      }      
      arr=arr+1;
      small(arr);    
    }
    return icnt; 
 } 
 
 int main()
 {
   char arr[50];
   printf("Enter string:");
   scanf("%[^'\n']s",arr);
   int iret=small(arr);
   printf("Small chars count is :%d\n",iret);
   return 0;
 }
