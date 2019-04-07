
#include<stdio.h>
#include<string.h>

int An(char *str1,char *str2);

int main()
 {
   char str1[20],str2[20];

   printf("Enter first string:");
   scanf("%[^'\n']s",str1);
   printf("Enter second string:");
   scanf(" %[^'\n']s",str2);
  
   An(str1,str2);
  
 }
 
 int An(char *str1,char *str2) //tea  //eat
 {
   char *ch1,*ch2;
   ch1=str1;
   ch2=str2;
   int len=0,len1=0,len2=0,i=0,j=0,found=0,n_found=0;  

    
   while(*str1 !='\0') 
     {
       len1++;
       str1++;
     }
     str1=ch1;
     
     while(*str2 !='\0') 
     {
       len2++;
       str2++;
     }
     str2=ch2;
    
   if(len1==len2)  //3 3 TRUE go ahead
   {
   
     len=len1;
      for(i=0;i<len;i++)
       {
          found=0;
          for(j=0;j<len;j++)
           {  						 //str1=tea  //str2=eat
             if(str1[i]==str2[j])
             {
               found=1;
               break;
             }
           }
           
           if(found==0)
          {
            n_found=1;
            break;
          }     
       }       
		 if(n_found==1)
		{ 
		  printf("String are not anagrams to each other\n");
		}  
		else
		{
		  printf("Strings are anagrams\n");
		} 
   }
   else
   {
    printf("both strings have same length\n");
   }
 
 
 
 }
