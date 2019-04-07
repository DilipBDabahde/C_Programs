//accept string from user and print given pattern
//  input =India
//  output= I n d i a
//	      I n d i 
//		I n d 
//		I n 
//		I

#include<stdio.h>
int pattern26(char *str);
int main()
{
  char arr[50];
  printf("Enter A string:\n ");
  scanf("%[^'\n']s",arr);
  pattern26(arr);
  return 0;
}

int pattern26(char *str)
{
  int i=0,j=0,icnt=0;
  
   while(str[icnt] !='\0')
   {
    icnt++;    
   }
   
   for(i=0;str[i]!='\0';i++)
   {
     for(j=0;j<=icnt-1;j++)
     {
       printf("%c ",str[j]);
     }printf("\n");
     icnt--;
   }printf("\n");
}


