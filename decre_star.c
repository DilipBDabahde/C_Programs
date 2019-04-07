//wap which take an input from uer and print its output in given format like
//
// input=5			output=*5 *4 *3 *2 *1


#include<stdio.h>
int showme(int no);
int main()
{
  int ino=0;
  printf("Enter a num:\n");
  scanf("%d",&ino);
  showme(ino);
  return 0;  
}

int showme(int ino)
{
  
  while(ino>0)
  {
   printf("*%d ",ino);
   ino--;  
  }
  printf("\n");
}
