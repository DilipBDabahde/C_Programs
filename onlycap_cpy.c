//accept string from user and copy only capital to new string
// example   str1=AbcdE    str2=AE

#include<stdio.h>
int onlycap(char *str,char *str2);

int main()
{
   char str1[25];
   char str2[25];
   
   printf("Enter string:\n");
   scanf("%[^'\n']s",str1); 
   onlycap(str1,str2);
   printf("We found Cap Letters -->");
   printf("%s",str2);
   printf("\n");
}

int onlycap(char *str1,char *str2)
{
   
    while(*str1 != '\0')
   {
      if(*str1>='A' && *str1<='Z')
     {
        *str2=*str1;
        str2++;
     }
     str1++;
   }
}



