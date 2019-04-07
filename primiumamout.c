#include<stdio.h>
#define FALSE 0
int display(int age)
{

  int value=0;
  
  if(age<0)
  { return FALSE;}
 
  else if(age>0 && age<20) {return value=3000;}
  else if(age>=20 && age<35){return value=5000;}
  else if(age>=35 && age<50){return value=8000;}
  else if(age>=50 && age<=80){return value=10000;}
  else {return  FALSE;}
}
int main()
{
  int n=0;
  printf("Enter your age:\n"); scanf("%d",&n); 
  int ret=display(n);
  if(ret>0)
  {
  printf("your prrmium amout is %d\n",ret);  
  }
  else
  {
  printf("Sorry! we could proceeds............\n");
  printf("Bcs your age is either 0 or greter than 80\n");
  printf("Please try again.............\n");
 } 
  return 0;   
}

