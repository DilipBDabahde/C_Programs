//accept str from user and print freq of small char
// Ashok	4
//Rahul Gandhi	9
//aai	3
//MIUM	0

#include<stdio.h>
void freqsmall(char *str);
int  main()
{
  char arr[44];
  printf("Enter string:\n ");
  scanf("%[^'\n']s",arr);
  freqsmall(arr);
  return 0;
}

void freqsmall(char *str)
{
   int ino=0;
   while(*str != '\0')
   {
      if(*str>='a' && *str<='z')
      {
        ino++;
      }
      str++;
   }
    printf("We found -->>%d<<-- small letters\n",ino);   
}
