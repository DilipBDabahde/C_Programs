//accept array from user and print all letters seperately
//exampe   input=Dilip     output= D i l i p

#include<stdio.h>
int bfun(char *str);
 int main()
 {
    char arr[20];
    printf("Enter name:\n");
    scanf("%[^'\n']s",arr);
    
    bfun(arr);
  return 0;
 }
 
 int bfun(char *str)
 {  int i=0;
    while(str[i] != '\0')
    {
      printf("%c\n",str[i]);
      i++;
    } 
 }
