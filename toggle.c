//accept string from user and toggle the string
// example   intut=AbCd     output= aBeD

#include<stdio.h>
#include<string.h>

int toggle(char *str);

int main()

{

  char ch[50];
  printf("Enter str:");
  scanf("%[^'\n']s",ch);
  toggle(ch);
  return 0;
}

int toggle(char *arr)
{
   while(*arr != '\0')
  {
  
    if((*arr>='A' && *arr<='Z'))
    {   
        *arr=*arr+32;
         printf("%c",*arr);
    }else if(*arr>='a' && *arr<='z')
    {
     *arr=*arr-32;
         printf("%c",*arr);
    }
    arr++;
    }
  printf("\n");
}

