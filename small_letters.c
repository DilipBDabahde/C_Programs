//accep char array from  user and print only small char from char string
// input  Dilip = output {--ilip--}

#include<stdio.h>
int smallchar(char *str);

int main()
{
  char crr[20];
  printf("Enter Chars:\n");
  scanf("%[^'\n']s",crr); 
  smallchar(crr);
  return 0;  
}
int smallchar(char *str)
{
      int i=0,icnt=0;
    /*  while(*str != '\0')   // we can also use while loop
      {
         if(*str >='a' && *str <='z')
         {
           printf("%c ",*str);
           icnt++;
         }
         str++;
      }
      */     
      
      for(i=0;(i<20) &&(*str != '\0');i++)   //perfect condition for-for loop //loop iterate till '\0'
      {
        if(*str>='a' && *str<='z')
         {
           printf("%c ",*str);
           icnt++;
         } 
         str++;  //str++ traverse array index by 1
      }    
      printf("\n");
      printf("we found small %d letters ok\n",icnt);
}

