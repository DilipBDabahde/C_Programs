//accept char from user and check it is small case or not

#include<stdio.h>
void checkonlysmall(char ch);

int main()
{
   char ch;
   printf("Enter a char:\n");
   scanf("%c",&ch);
   checkonlysmall(ch);
   return 0;
}

void checkonlysmall(char ch)
{
    if(ch>='a' && ch<='z')
    {
         printf("True\n");
    }
    else
    {
      printf("False\n");
    }

}
