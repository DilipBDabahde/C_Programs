//accept string from user and copy contenet of str1 into str2 use --->> strcpy function

#include<stdio.h>
int strcpyx(char *str1,char *str2);

int main()
{
  char str1[30];
  char str2[30];
  printf("Eter string:\n ");
  scanf("%[^'\n']s",str1);
  
  strcpyx(str1,str2);
  printf("%s\n",str2);
  return 0;
}

int strcpyx(char *str1,char *str2)
{
   while(*str1 != '\0')
   {
      *str2=*str1;
      str1++;
      str2++;
   }
   str2='\0';
   printf("\n");
}

