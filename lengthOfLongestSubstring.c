//accept string from return count of string do not consider repeated character
//input: abcabccbba
//output:2   bcs =abc   this 3 character in our string comes repeatedly

#include<stdio.h>

int lengthOfLongestSubstring(char arr[])
 {
     char brr[26];
     int i=0,icnt=0;
     char temp='\0';
     
     printf("Non-Repeated Characters\n");
     while(arr[i]!='\0')
     { 
        temp=arr[i];
        
        if(temp != ' ')
        {
          printf("%c ",arr[i]);
          int  j=i;
          icnt++;
          while(arr[j]!='\0')
          {
             if(arr[j]==temp)
             {
               arr[j]=' ';
             }
             j++;
          }       
        }       
        i++;        
     }      
      return icnt; 
 }
 
 int main()
 {
  int size=50;
  
  printf("Enter string:\n");
  char arr[size];
  scanf("%[^'\n']s",arr);
  
  int iret=lengthOfLongestSubstring(arr);
  printf("\n%d \n",iret);
  
 return 0;
 }
