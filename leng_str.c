//accept string from user and print size of string
//exampe input = dineshdabhade  output=13

#include<stdio.h>
int fun(char *str);
int main()
{
  char arr[40];
  printf("Eter stirng:\n ");
  scanf("%[^'\n']s",arr);
  int icnt=0;
  fun(arr);
}
int fun(char *arr)
{
  int icnt=0;
  while(*arr != '\0')
 {
      icnt++;
      arr++;
 }
  printf("\n Total String size is %d\n",icnt);
}
