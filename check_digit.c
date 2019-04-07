//dif between number and digit
// num =1324 this is num more than [ 1 ] digit
// digit means only one num  7 is a digit, 2 is a digit, 0 is a digit  , 0-9 are digits
//accept a character from user and check it is digit or not
// declare one char 
//take one input value in it useing scanf 
//call to business fun and check 
// if we found num display true else false
#include<stdio.h>

void checkdigit(char num);

int main()
{
  char ch;
  printf("Enter a num:\n");
  scanf("%c",&ch);
  checkdigit(ch);
  return 0;
}

void checkdigit(char num)
{
   if(num>= '0' && num <='9')
   { printf("------------------------------\n");
     printf("You entered is digit--->> TRUE\n");
     printf("------------------------------\n");
   }
   else
   {  printf("------------------------------\n");
      printf("You entered is not digit---> FALSE\n");
      printf("------------------------------\n");
   }

}
