///accept one num from user and return largest common factor of that num
#include<stdio.h>
int largestfactor(int value);

int main()
{
  int num=0,iret=0;
  
  printf("Enter a num:\n");
  scanf("%d",&num);
  iret=largestfactor(num);

  printf("%d is largestfactor of %d\n",iret,num);


}

int largestfactor(int value)
{
    int sum=0,i=0;
    
    for(i=1;i<=(value-1);i++)
    {
      if(value%i==0)
      {
        sum=i;
      }
    }
     return sum;
}
