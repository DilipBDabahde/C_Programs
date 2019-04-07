//accept char from user and print only capital character
//AbcD

#include<stdio.h>
#include<stdlib.h>
 void charcap(char *arr,int size);
 
int main()
{
  int length=20,i=0;
   
  char arr[length]; 
  
  printf("Enter 20 char into array\n");
  scanf("%[^'\n']s",arr);
  charcap(arr,length);
  return 0;
} 
/*
   in below program we get string from user and we print only cap letters
*/
void charcap(char *str,int length)  
{
   int i=0;
   int icnt=0;
  while(*str != '\0')  //value validation
   {
     if(*str>='A' && *str<='Z')
     {
       printf("%c ",*str);
       icnt++;     
     }     
     str++;  //index chnage hotai
   }printf("\n");
   
       printf("we found %d capital char\n",icnt);  
}

