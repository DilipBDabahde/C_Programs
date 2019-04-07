//accept a string frm user and reverse it (  in place )
// example str=ADIL   output=LIDA
//       input = Ramja	Output=ajmaR

#include<stdio.h>
int strrevx(char *Str);
int  main()
{
   char arr[50];
   printf("Entre a string to get its reverse:\n");
   scanf("%[^'\n']s",arr);
   strrevx(arr);
   return 0;

}

int strrevx(char *Str)
{
   while(*Str != '\0')
   {
       Str++;
   }
    Str--;
  printf("-------------------\n");  
    while(*Str != '\0')
  {
      printf("%c",*Str);
      Str--;
  }
  printf("\n");
  printf("-------------------\n");  
  printf("\n");

}
