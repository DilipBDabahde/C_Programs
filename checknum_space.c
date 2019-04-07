//accept num from uer and print given patter
// 
// ex:  input   5 &  3
// output:	  1 3 9 27 81
//            1+1+1 or 3+3+3 or 9+9+9 or 27+27+27 or 81

#include<stdio.h>
int checkno(int ino1);
int main()
{

  int i=0,j=0,ino=0;
  printf("Eter ino value \n");
  scanf("%d",&ino);
 
  checkno(ino);
  return 0;
}

int checkno(int ino1)       //checknum_space.c
{
   if(ino1==0 )
   {
     return 0;
   }
   int i=0;
   int j=1;
   while(i != ino1)
   {
     printf("%d ",j);
     i++;     
     j=j+j+j;
   }
}
