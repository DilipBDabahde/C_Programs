//accept num from  user and print digit of that num in reverse format
//exa	input=174  output 4 7 1
//				4 7 1
//				4 7 1

#include<stdio.h>
int Digit(int no);
int main()
{
   int num=0;
   printf("Enter a num:\n");
   scanf("%d",&num);
   Digit(num);
   return 0;
}

int Digit(int inum)
{
  int temp=0,icnt=0;
 
  if(inum<0)
  {
    inum=-inum;
  }
  temp=inum;
  while(inum != 0)
   {
     inum=inum/10;
     icnt++;   
   }
    inum=temp;
   
   int i=0,j=0;
   for(i=1;i<=icnt;i++,inum=temp)
   {
     for(j=1;j<=icnt;j++,inum=inum/10)
     {
       printf("%d ",inum%10);
     }printf("\n");
   }printf("\n");

}

/*

#include<stdio.h>
int main()
{
  int n=0,i=0,j=0,icnt=0,temp=0;
  printf("Enter a num:\n");
  scanf("%d",&n);
  temp=n; 
  while(n!=0)
 {
   n=n/10;
   printf("%d ",n);
   icnt++;
   
 } 
  printf("\ninct become %d \n",icnt);
  n=temp;

  for(i=1;i<=icnt;i++,n=temp)
  {
    for(j=1;j<=icnt;j++,n=n/10)
   { 
     printf("%d ",n%10);
   } printf("\n");
  }printf("\n");
   
} */
