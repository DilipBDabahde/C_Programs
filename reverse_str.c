//accept string from user and revese it

#include<stdio.h>
void reverse(char *str);
int main()
{
  char arr[20];
  printf("Enter string\n");
  scanf("%[^'\n']s",arr);
  reverse(arr);
  return 0;
}

void reverse(char *str)
{
  int icnt=0;
   while(*str !='\0')
   {
      icnt++;
      str++;
   }
    
 str--;
 
   while(icnt>0)
  {
      printf("%c",*str);
      icnt--;
      str--;
  }printf("\n");
}
