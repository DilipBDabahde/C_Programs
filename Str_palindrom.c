//accepst string from user and check givne string is ||palindrom or not||
//
// input= ANIL  ==FALSE     AABBAA=TRUE     ABD=FALSE


#include<stdio.h>
#include<stdlib.h>

 int str_pal(char *str)
  {
    int icnt=0;
    char *start_up=str;
    
     while(*str != '\0')
     {
       str++;
     }str--;
     
     while(*start_up != '\0')
     {
        if(*start_up != *str)
        {
          icnt++;
        }
        start_up++;
        str--;
     }
     str++;
     start_up--;
     
     if(icnt==0)
     {
      printf("Given string is palindrom \n|| ~~ %s  ~~||\n",str);
     }
     else
     {
      printf("Given string is not palindrom \n|| ~~ %s  ~~||\n",str);
     }
     printf("\n");
  }
  
  
int main()
 {
   char *c_ptr=NULL;
   c_ptr=(char *)malloc(sizeof(char));
   
   printf("Enter string:\n");
   scanf("%[^'\n']s",c_ptr);
   
   str_pal(c_ptr);
   return 0;
 }
 
   
