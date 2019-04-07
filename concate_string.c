//accept two string from user and concate them

#include<stdio.h>
#define MAX 100

int catstring(char *start,char *end);

int main()
{
    char arr[MAX]={"Hello"};
    char brr[MAX]={"DILIP"};
  
    catstring(arr,brr);
    printf("concated string is --->>>> %s\n",brr);
    return 0;
}

int catstring(char *start, char *end)
{
   char *suroo=start;
   char *shewat=end;
   
   while(*shewat != '\0')
     {
       shewat++;
     }
    
    while(*suroo != '\0')
     {
         *shewat=*suroo;
         suroo++;
         shewat++;
     }
     
     *shewat='\0';
}
