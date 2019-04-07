//accept strinf from user and print below pattern
// input=Dilip
// output= D D D D D
//         i i i i i
//	     l l l l l 
//	     i i i i i
//	     p p p p p 

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

int str(char *str)
{
  int i=0,j=0;
  for(i=0;str[i] != '\0';i++)
  {
    for(j=0;str[j] != '\0';j++)
    {
      printf("%c ",str[i]);
    }printf("\n");
  }
}
