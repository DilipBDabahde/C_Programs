//accept special char fromuser and print true or false
//spe sym= { ! @ # % ^ &}
#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a char:\n");
  scanf("%c",&ch);
  if(ch=='!'|| ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&')
  {
    printf("True\n");
  }
  else
  {
    printf("False\n");
  }

}
