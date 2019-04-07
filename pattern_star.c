//accept strinf from user and print below pattern
// input=Dilip
// output= D * * * * 
//         D i * * *
//	     D i l * * 
//	     D i l i *
//	     D i l i p 

#include<stdio.h>
int str(char *str);
int main()
{
  char arr[50];
  printf("Enter a String:\n");
  scanf("%[^'\n']d",arr);
  str(arr);
  return 0;
}

int str( char *str)
{
  int i=0,j=0;
  for(i=0;str[i] != '\0';i++)
  {
    for(j=0; str[j]!='\0';j++)
    {
      if(j<=i)
      { 
      printf("%c ",str[j]);
      }
      else
      {
        printf("* ");
      }
      }printf("\n");
  }
}
