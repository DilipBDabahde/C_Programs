//accept string from user and wherever we gets space then add any word in that space\
//input1: Dadu is back
//input2: %19
//output: Dadu%19is%19back

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void InsertWord(char arr[],char word[])
 {
    char *crr1=NULL;
    char *crr2=NULL;
    int icnt=0,inum=0,j=0,k=0;
    
    crr1=arr;
    while(*crr1 != '\0')
    {
       if(*crr1 != ' ')
        {
          icnt++;
        }
        else if(*crr1 == ' ')
        {
          inum++;
        } 
        crr1++;                
    }
    
    crr1=word;
    
    while(*crr1 != '\0')
    {
        j++;
        crr1++;
    }
    
   
   icnt=icnt+(inum*j);  
   char arr2[icnt];
   int i=0;
   crr1=arr;
   inum=0;
                           
   while(i<=icnt)
    {            
      if(arr[i] !=' ' )
      {
        arr2[inum]=arr[i];
        inum++;
        i++;
      }
      else if(arr[i]== ' ')
      {  
        int x=0;
         while(x<j)
        { 
         arr2[inum]=word[x];
         x++;
         inum++;
        }
        i++;         
      }
    }          
    printf("%s\n",arr2);
  }
 
 
 int main()
 {
   char *arr=NULL;
   char *brr="%32";
   
   arr=(char*)malloc(sizeof(char));

   
   printf("Enter string\n");
   scanf("%[^'\n']s",arr);  
      
   InsertWord(arr,brr);
     
   free(arr);
    
      
 return 0;  
 }

