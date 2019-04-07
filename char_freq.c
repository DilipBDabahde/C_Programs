//accpet string from user  and count freq of each character from string
// ramjane
#include<stdio.h>
#include<stdlib.h>

void freq(char *str)
 {
    int arr[26]={0};
    int i=0;
    
    for(i=0;str[i] != '\0'; i++)
    {
      arr[str[i]-'a']++;
    }
    
    for(i=0;i<26;i++)
    {
      if(arr[i] != 0)
      {
        printf("%d ",arr[i]);
      }
    }printf("\n");
 }
 
 int main()
 {
   char arr[50];
   printf("Enter string\n");
   scanf("%[^ '\n']%*c",arr);
   freq(arr);
   return 0;
 }
