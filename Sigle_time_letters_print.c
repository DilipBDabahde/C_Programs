//accept string from user and do not repeat its letters
//exmaple   :abcabc   ouput:abc
//          ;

#include<stdio.h>
#include<stdlib.h>

  int fun(char *str)
 {
   char *ch1,*ch2;
   int icnt=0;
   
   ch1=str;
   ch2=str;
   
   
   while(*ch1!='\0')   //abcabc    //abc
   {
       char ch=*ch1;
         
         while(*ch2!='\0')
         {
             if(ch==*ch2) //a
             {
               icnt++;// 12
               
             } 
              ch2++;        
         }
          str++;
          ch2=str;
         
        if(icnt != 0) 
        {
           for(int i=0;i<1;i++)
           {
             if(ch==*ch1 && icnt==1)
             {
             printf("%c",ch);
           }
          } 
        }
        icnt=0;
        ch1++;        
   }	
 
 }

 int main()
 {
   char *s;
   s=(char*)malloc(sizeof(char));
   
   printf("Enter string:");
  scanf("%[^'\n']s",s);
  fun(s);
  printf("\n");
  return 0;
 }
