//accept string from user and revers that string inplace

#include<stdio.h>
int revs(char *str);
int main()
{
   char arr[50];
   printf("Enter string\n");
   scanf("%[^'\n']s",arr);      // [h e l l o \0]
   printf("before call -->>%s",arr);
   revs(arr);
   printf("\n");
   printf("After call -->>%s ",arr);
      
   printf("\n");
   return 0;
}

int revs(char *str) 
{  
   char *src,*dst;
   char temp;
   src=str;
   dst=str;
  // printf("before swap\n");
   while(*dst != '\0')
   {
     dst++;
   }
      
   dst--;
   
   while(src<dst)
   {
      temp=*src;
      *src=*dst;
      *dst=temp;
         src++;
         dst--;  
   }

}
