//accept division from user and display div-wise exam time
// div should be between a-to-d  
//
// 1]  a||A  7am   to 10am
// 2]  b||B  10am  to 1pm
// 3]  c||C  1pm   to 4pm
// 4]  d||D  4pm   to 7pm

#include<stdio.h>
typedef void NOVALUE;
typedef int BOOL;

NOVALUE showtime(char ch);
BOOL main()
{
    char ch;
    printf("Enter your division:\n");
    scanf("%[^'\n']s",&ch);
    showtime(ch);
    return 0;
}

NOVALUE showtime(char ch)
{
   switch(ch)
  {
     case 'A':
     case 'a':
     printf("----------------------\n");
     printf("Div A ");
     printf("Exam starts:\n");
     printf("7am to 10am\n");
     printf("----------------------\n");
     break;
   
     case 'B':
     case 'b':
     printf("----------------------\n");
     printf("Div B ");
     printf("Exam starts:\n");
     printf("10am to 1pm\n");
     printf("----------------------\n");
     break;
     
     case 'C':
     case 'c':
     
     printf("----------------------\n");
     printf("Div C ");
     printf("Exam starts:\n");
     printf("1pm to 4pm\n");
     printf("----------------------\n");
     break;
    
     case 'D':
     case 'd':
     printf("----------------------\n");
     printf("Div D ");
     printf("Exam starts:\n");
     printf("4pm to 7pm\n");     
     printf("----------------------\n");
     break;
      
     default:
     printf("Invalid Division\n"); 
     break;
  }
}


