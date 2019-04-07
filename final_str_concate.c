//accept 2 string from user and concate 2nd to first

#include<stdio.h>

int main()
{
  char arr[55];
  char brr[55];
    int i=0,j=0;
  printf("Enter str1:\n");
  scanf("%s",arr);
  
  printf("Enter str2:\n");
  scanf("%s",brr);
  

  for(i=0; (arr[i]!='\0') ;i++)
   
  for(j=0; (brr[j] !='\0') ;j++,i++) 
   {
      arr[i]=brr[j];   
   }
   
   arr[i]='\0';
  
  printf("Final concate==>>%s\n",arr);
  return 0;
}

