/*palindrom num 
 input 121 TRUE
 123 FALSE
 
 */
 
 #include<stdio.h>
 
 int Pal(int x)
  {
    int temp=0,idigit=0,rev=0;
    
    while(x != 0)
    {
      idigit=x%10;
      if(idigit)
      {
         rev=rev*10+idigit;   
         temp=rev;   
      }
      x=x/10;   
    }
    
    return temp; 
  }
  
  
int main()
{
  int value=0;
  printf("Enter num:\n");
  scanf("%d",&value);
  int ret=Pal(value);
  
  if(ret==value)
  {
    printf("TRUE\n");
  }
  else
  {
   printf("FLASE\n");
  }

}  
