//accept two string user and dispaly their length
//ex: input =DILIP	output=5
//ex: input =Dabhade	output=7

#include<stdio.h>
void str_len(char *str1,char *str2);

int main()
{
  char arr[50];
  char brr[50];
  
  printf("Enter str1\n");
  scanf("%s",arr);
  
  printf("Enter str2\n");
  scanf("%s",brr);
  
  str_len(arr,brr);
  return 0;
}

void str_len(char *str1,char *str2)
{
  int icnt=0,ino=0;
  if(str1==NULL || str2==NULL)
  {
   
  }
  
 while(*str1 != '\0')
 {
   icnt++;
   str1++;
 }
 while(*str2 != '\0')
 {
   ino++;
   str2++;
 }
 
 printf("str1 length is %d\n",icnt);
 printf("str2 length is %d\n",ino);
}

/*
 while((*str1 != '\0')||(*str2 !='\0'))
 {
   if(*str1 != '\0')
  {
   icnt++;
   str1++;
  }

  if(*str2 !='\0')
  {
   ino++;
   str2++;
  }
 }
 */
