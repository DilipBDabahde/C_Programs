#include<string.h>
#include<strings.h>
#include<stdio.h>
#include<malloc.h>
int main()
 {
    char *str1=NULL;
    char *str2=NULL;
    
    int size=0;
    
    str1=(char *)malloc(sizeof(char));
    str2=(char *)malloc(sizeof(char));
    
    printf("Enter first string:");    
    scanf("%[^'\n']s",str1);
       char *s;
    	 s=str1;        
    //printf("Enter second string:");    
   // scanf(" %[^'\n']s",str2);
     while(*str1 !='\0')
     {
      size++;
      str1++;
     }
     str1=s;    
      
     
         
     memcpy(str2,str1,size);
     
      s=str1; 
     while(*str1 !='\0' && *str2 !='\0')
     {
      printf("%c %c ||",*str1,*str2);
     str1++;
     str2++;
     } 
     
     printf("\n");
  
    	
 }
