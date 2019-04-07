//accept a string frm user and reverse it (  in place )
// example str=ADIL   output=LIDA
//       input = Ramja	Output=ajmaR

#include<stdio.h>
int strrevx(char *Str);
int  main()
{
   char arr[50];
   printf("Entre a string:\n");
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
    
    while(*Str != '\0')
  {
      printf("%c",*str);
      str--;
  }

}
