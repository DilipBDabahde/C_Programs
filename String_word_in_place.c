/*
accept string from user and repalce that string in reverse order as WORD
input: Ram is good boy
output: boy good is Ram
*/

#include<stdio.h>
#include<stdlib.h>


void Reverse_Word(char arr[])
 {
    int i=0,j=0;
   

    while(arr[i] != '\0')
    {
      i++;
    }
        	
    while(i>=0)  
    {      
      if(arr[i]==' ' || i==0)
      {         
         if(i!= 0)
         {
           j=0;
           j=i;
           j++;         
         }
         else
         {
           j=i;
         }         
         while(arr[j] != '\0' && arr[j] != ' ')
          {
            printf("%c",arr[j]);
            j++;
          }       
          printf(" ");           
      }
       i--;     
    }   
 }
 
 int main() 
 {
   char *arr;
   
   arr=(char*)malloc(sizeof(char));
   
   printf("Enter sentence\n");
   scanf("%[^'\n']s",arr);
 
   Reverse_Word(arr);  
   printf("\n");
  
  return 0;
 }
