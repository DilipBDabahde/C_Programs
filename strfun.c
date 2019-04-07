//string palindrom checking using
//strcpy,strcmp,strrev

#include<stdio.h>
#include<string.h>
int main()
{  
   int flag;
   char str1[50],reverse[50];
   printf("Ener string:\n");
   scanf("%s",str1);
   
   strcpy(reverse,str1);
   strrev(reverse);
   flag=strcmp(str1,reverse);
   if(flag==0)
   {
     printf("String is palindrom\n");
   }
   else
   {
    printf("String is not palidnrom\n");
   }
   return 0;
}
