//accept string from user and print vowels with num
//example input=Anil  output= A i 2

#include<stdio.h>

int vowel(char *str);
int main()
{
  char arr[20];
  printf("Enter Strinng:\n");
  scanf("%[^'\n']s",arr);
  vowel(arr);
  return 0;
}

int vowel(char *str)
{
  int icnt=0;
  while(*str != '\0')
  {
    if(*str=='a' || *str=='A' ||*str=='e'||*str=='E'||*str=='o'||*str=='O'||*str=='u'||*str=='U'||*str=='i'||*str=='I')
    {
       printf("%c ",*str);
       icnt++;
    }
    str++;
  }
  printf("  <<-----");
  printf("\n");
  printf("---------------------\n");
  printf("We found %d vowels\n",icnt); 
  printf("---------------------\n");
}
