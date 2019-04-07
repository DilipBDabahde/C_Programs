//take two nums from user and send to them to function and check return value is same or not
#include<stdio.h>
int addchecker(int a,int b);

 int main()
 {
    int a=0,b=0,c=0;     
    printf("Enter a two num\n");
    scanf("%d%d",&a,&b);  
    int add=a+b;
    int iret=addchecker(a,b);
    if(add==iret)
    {
       printf("Given num addition is correct %d\n",iret);
    }  
    else
    {
      printf("Given num addition is not correct %d\n",iret);
    }
    return 0;
 }
 
int addchecker(int x,int y)
{
    int z=x+y;
    return z;
}
