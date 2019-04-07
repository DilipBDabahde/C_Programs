//accept a string from user and convert it in given format

// i am sagar
//           reverse= ragaspp mapp ipp

#include<stdio.h>

void rev(char *str)
 {
 
   char *ch1,*ch2; 
   ch1=str;
  
   while(*ch1 != '\0')
   {
     ch1++;   
   }
   int i=1;
   ch2=ch1;
   ch2--;

   while(*ch2 != '\0')
   {  
       if(*ch2 != ' ')
       {
       printf("%c",*ch2);
       }      
          
      if(*ch2 == ' ')
      {
       printf("pp ");
      }
      
      ch2--;
   }
      printf("pp");
 }
 
int main()
 {
    char arr[50];
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    
    rev(arr);
    printf("\n");
    return 0;   
 } 
