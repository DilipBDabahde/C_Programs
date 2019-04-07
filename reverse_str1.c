//accept str from user and reverse it 
// ex    abd    dba
// ex    pqr     rqp

#include<stdio.h>
void fre(char *str);
 int main()
 {
   char arr[50];
   printf("Enter a string\n");
   scanf("%[^'\n']s",arr);
   fre(arr);
   return 0;
 }
 
void fre(char arr[]) 
{
   int ino=0;   
   while(*arr != '\0')
  {
    ino++;
    arr++;
  }
  
  arr--;
  
  while(ino>0)
  {
    printf("%c",*arr);
    ino--;
    arr--;
  }printf("\n"); 

}
