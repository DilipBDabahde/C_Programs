#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Search_word(char *str,char *cword)
 {
    char *ch1,*ch2,*ch3,*cword1;
    
    int icnt=0,inum=0;
    ch1=str;
    ch3=ch2;
    cword1=cword;
    int len=strlen(cword);
 if(len != 0)
 {   
    while(*ch1 != '\0' && *ch1 != ' ') //i am dilip  //an
   {
       *ch2=*ch1;
        ch2++;
        ch1++;     
   }
   *ch2='\0';
   ch2=ch3;
   
   while(*ch2 != '\0')
     {
       if(*ch2==*cword1)
       {
         icnt++;
       }
       ch2++;
       cword1++;
     }   
    
    if(len==icnt)   
        {
           inum++;
        }
       ch2=NULL;
       cword1=cword;
       ch1++;
   
  
 
     printf("%d\n",inum);
     /*if(*ch2=='\0' && *cword1=='\0')
     {
          return inum;
     }
  */
 
  }
 
 }




 int main()
 {
    char *cstr,*cword;
    
    cstr=(char *)malloc(sizeof(char));
    cword=(char *)malloc(sizeof(char));
    
    printf("Enter string:\n");
    scanf("%[^'\n']s",cstr);
    
    printf("Enter word:\n");
    scanf(" %[^'\n']s",cword);
    
   int ret=Search_word(cstr,cword);
   if(ret==0)
   {
    printf("No Word\n");
   }
   else
   {
    printf("no of times we found %d\n",ret);
   }
    return 0;
        
 }
