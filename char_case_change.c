//accept char from user and check its case
#include<stdio.h>

 int main()
 {
  char ch;
  printf("Enter a char\n");
  scanf("%c",&ch);
 
  if(ch >='a' && ch<='z')
  {
    printf("before change %c\n",ch);
    printf("after change %c\n",ch-32);
  }
  else if(ch>='A' && ch<='Z')
   {
    printf("before change %c\n",ch);
    printf("after change %c\n",ch+32);
   }
 }
