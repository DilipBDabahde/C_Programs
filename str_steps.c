//accept string from usr in array print its outpput like this
// input =Dil
//  output= D i l	i p
//	      D i l i p
//		D i l i p
//	 	D i l i p
//		D i l i p

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
      printf("%c ",str[j]);
    }printf("\n");
  }
}
