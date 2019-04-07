//accept num from user and check givven num is odd or even without using % / operation

// use bitwise operatior

#include<stdio.h>

  int withoutmod(int value)
  {
    if((value & 1)==1)
    {
      printf("odd\n");
    }
    else
    {
      printf("Even\n");
    }
  }
  
  int main()
  {
    int num=0;
    printf("Enter a num\n");
    scanf("%d",&num);
    withoutmod(num);
   
    
  return 0;
}  
    
