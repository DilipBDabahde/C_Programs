//accept str from sr and copy it into another str

#include<stdio.h>
int str(char *src,char *dst);
int main()
{
  char src[25];
  char dst[25];
  
  printf("Enter str for src\n ");
  scanf("%[^'\n']s",src);
 
  str(src,dst);
  printf("%s",dst);
  return 0;
}

int str(char *src,char *dst)
{
   
   
   while(*src !='\0')    //1 2 3
   {
      *dst=*src;
      src++;
      dst++;
     
        
   }
	*dst='\0';
     
	 
}
