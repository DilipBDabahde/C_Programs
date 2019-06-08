//accept string from user and reverse each word inplace And Display
//input : this is game  
//output: siht si emag

#include<stdio.h>
#include<stdlib.h>

  int WordCnt(char arr[])
  {
     char *Temp=NULL;
     int i=0,j=0;	
     if (NULL==arr)
      {
       return 0;
      }
      
      while(*arr != '\0' || i==0)
      {      
         if(*arr=='\0' && i==0)
         {
           i++;
         }
          j++;
          if(*arr==' ' || i==1)
         {
           Temp=arr;
           Temp--;
         
           while(j!=0)
           {
             printf("%c",*Temp);
             Temp--;
             j--;
           }
           j=0;
            printf(" ");
         }
        arr++;     
      }
  
  
  }

 int main()
 {
   char *arr;
   
   printf("Enter string\n");
   
   arr=(char*)malloc(sizeof(char));
   
   scanf("%[^'\n']s",arr);
 
   
   int iret=WordCnt(arr);
   printf("\n");

   free(arr);
   return 0;
 } 
