//input dilip  

#include<stdio.h>
  char countletterfreq(char *str);
  int main()
  {
     char arr[25]="dilip";
     printf("Enter String\n");
   
     countletterfreq(arr);
     return 0;  
  }
  
  char countletterfreq(char *str)
  {
     int a=0,b=0,c=0,d=0;
     
     if(*str==0)
     {
       return;
     }
     
     while(*str != '\0')
     {
       if(*str==d)
        {
         a++;
        }
        else if(*str==i)
        {
          b++;
        }
        else if(*str==l)
        {
         d++;
        }
        else if(*str==p)
        {
         e++;
        }
         str++;
     }
     
   printf("We found total num freq:\n d->%d ties\n i->%d times\n l->%d times\n p->%d times\n",a,b,c,d,e);  
  
  }
