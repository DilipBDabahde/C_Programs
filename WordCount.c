//accept string from user and count total word from that string
//input : i am ram   ok   
//output:4
//input : abc
//output:1
//input : 
//output: 0

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int WordCnt(char arr[],int size)
 {
   
   
   if(arr==NULL || size<=0)
   {
    return 0;
   }
   int icnt=0,j=0;
   for(int i=0;i<size;i++)
   {
      if(arr[i]==' ')
      {
        for(j=i;j<size;j++)
        {
           if(arr[j]!=' ')
           {
            break;
           }        
        }
        i=j-1;
      }
      else if(arr[i]!= ' ')
      {
        icnt++;
        
         for(j=i;j<size;j++)
         {
           if(arr[j] == ' ')
           {
             break;
           }         
         }         
         i=j-1;
      }  
   }   
   return icnt;
 
 }
 
 int main()
 {
   char *arr;
   
   printf("Enter string\n");
   
   arr=(char*)malloc(sizeof(char));
   
   scanf("%[^'\n']s",arr);
   
   int size=strlen(arr);
   
   int iret=WordCnt(arr,size);
   printf("Total word count from string is %d\n",iret);
   
   return 0;
 } 
