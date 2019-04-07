//accept one num from usr and return its reverse
//ex 3234 4323    // 234  432

#include<stdio.h>
void numrev(int num) //12
{
    int idigit=0,irev=0;
    int num1=num;
    while(num!=0)
    {
       idigit=num%10;
       irev=irev*10+idigit;  
       num=num/10;  
    }
    printf("%d is reverse of %d\n",irev,num1);
}
 int main()
 {
    int inum;
    printf("Enter a num:\n");
    scanf("%d",&inum);
    
    numrev(inum);
    return 0;
 
 }
