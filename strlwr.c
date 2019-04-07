#include<stdio.h>
#include<string.h>
void convert(char *str);

int main()
{

  char str[50];
  printf("Enter string\n");
  scanf("%[^'\n']s",str);
  convert(str);
  return 0;
}

void convert(char *str)
{
 char *arr;
 arr=strlwr(str);
 while(*arr != '\0')
 {
   printf("%c",*arr);
   arr++;
 }
}
