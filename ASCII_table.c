//wap which display ASCII table

#include<stdio.h>
int main()
{
  int start=1;
  int end=255;
  
  for(start=1;start<=end;start++)
  {
    
    printf("%d<<--->>%c\n",start,start);
    if(start%10==0)
    {
      printf("\n");
    }
  }
   printf("\n");
  return 0;

}
