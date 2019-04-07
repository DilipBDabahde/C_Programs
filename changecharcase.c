//changecharcase.c //accept only one char from user and chage its case

#include<stdio.h>
 int main()
 {
    char ch;
    printf("Enter a  char:\n");
    scanf("%c",&ch);
  
    printf("selected char ->>> %c\n",ch);
    
    if((ch>='A') && (ch<='Z'))
    {
      printf("lowercase is ->>>> %c\n",ch+32);
    }
    
    else
    {
      printf("upppercase is -s>>> %c\n",ch-32);
    }
 
   return 0;
 
 }
