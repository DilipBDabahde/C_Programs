//wap which two input from usr one to iterate loop and second is for to use myti of last output
//
// exa:  intput  =5
//       output  =1 3 9 27 81

#include<stdio.h>
int m1(int no1,int no2);
int main()
{
   int no1,no2;
   printf("Enter  2 nums\n");
   scanf("%d %d",&no1,&no2);
   m1(no1,no2);
   return 0;
}

int m1(int no1,int no2)
{
  int i=1,k=1;
  while(k<=no1)
  {
    printf("%d ",i);
    i=i*no2;
    k++;
  }
  printf("\n");
}
