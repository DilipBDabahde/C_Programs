//accept str from sr and only copy  capial char it into another str

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
  printf("\n");
  return 0;
}

int str(char *src,char *dst)
{
   if(NULL ==src)
   {
     return -1;
   }
   
   
   while(*src !='\0')    //1 2 3
   {
      if(*src>='A' && *src<='Z')
     {
      *dst=*src;
      src++;
      dst++;
     }
        src++;
   }
	*dst='\0';
     
	 
}
