#include<stdio.h>
#define TRUE 1
#define FALSE 0

int DisplayClass(int tot,int ret);
int CalculateMarks(int tot,int obt);

int main()
{
  int tot=0,obt=0,ret=0,dsp=0;
  
  printf("Enter your total and Obtained Marks:\n");
  scanf("%d %d",&tot,&obt);

  printf("your tatal marks are:%d\n",tot);
  
  printf("your obtains marks are:%d\n",obt);
  printf("your class status is loading......\n");
  
  
  CalculateMarks(tot,obt);

}
  
  
  int CalculateMarks(int tot,int obt)  //500 350
  {
    int ret=0;
    int total=obt*100/tot;
 
    DisplayClass(tot,total);
  
 
 }
  
 int DisplayClass(int tot,int obt)
 {
    int ret=obt;
    if(ret<35)
    {
      printf("your total marks %d\n",tot);
      printf("you obaited %d\n",ret);
      printf("y are faied\n");
    }
    else if(ret>=35 && ret<50)
    {
      
      printf("your total marks %d\n",tot);
      printf("you obaited %d\n",ret);
      printf("y are pass\n");
    }
    else if(ret>=50 && ret<60)
    {
     
      printf("your total marks %d\n",tot);
      printf("you obaited %d\n",ret);
      printf("y are secodn\n");
    }
    else if(ret>=60 && ret<75)
    {
    
      printf("your total marks %d\n",tot);
      printf("you obaited %d\n",ret);
     printf("y are first \n");
    }
    else if(ret>=75)
    {
     
      printf("your total marks %d\n",tot);
      printf("you obaited %d\n",ret);	
      printf("y are A+\n");
    }
    return 0;
  }  
 
