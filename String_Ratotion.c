//accept two string from user and check second string is rotation of first string

#include<stdio.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
#define FAILURE -1

typedef int BOOL;

BOOL String_Rot(char arr[],char brr[])
 {
    int i=0,j=0;
    int len1=strlen(arr);
    int len2=strlen(brr);
        
    if(len1==len2)
     {
        char crr[len1+len1];
        
        for(i=0,j=0;i<len1+len1;i++)
         {
         
            if(i<len1)
             {
                crr[i]=arr[i];               
             }
             else
              {
                crr[i]=arr[j];
                j++;                
              }        
         }
         
         for(i=0,j=0;i<len1+len1;i++)
         { 
           if(crr[i]==brr[j])
            {
               j++;
            }
            if(j==len1)
            {
             break;
            } 
         }              
     }
     else
     {
        return FAILURE;    
     }  
     
     if(j==len1)
     {
       return TRUE;     
     }
     else
     {
      return FALSE;
     }      
 } 
 
 int main()
 {
 
   char ch[]="FruitMango";
   char ch1[]="MangoFruit";
   BOOL Bret=String_Rot(ch,ch1);
   if(Bret==TRUE)
    {
      printf("Given 2nd string is rotaion\n");
    }else if(Bret==FALSE)
    {
     printf("Given 2nd string is not rotaion\n");
    }else
    {
     printf("Incorrect input\n");
    }   
   
 return 0;
 }
