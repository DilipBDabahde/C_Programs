/*
Q1.Write a recursive program which accept string from user and toggle case of each character
Input : AbCD
Output : aBcd
*/

#include<stdio.h>

 void Toggle(char arr[])
 {
    if(*arr != '\0')
    {
      if(*arr>='A' && *arr<'Z')
      *arr=*arr+32;
      else if(*arr>='a' && *arr<='z')
      *arr=*arr-32;
      
      arr=arr+1;
      Toggle(arr);
    }
 }
 
 int main()
 {
   char arr[50];
   printf("Enter String:");
   scanf("%[^'\n']s",arr);
   
   printf("Before Toggle:%s\n",arr);
   Toggle(arr);
   printf("After Toggle:%s\n",arr);
   
   return 0;
 }
