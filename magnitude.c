//accept array from user and make addition of left and rigth num check additon of them is middle
/*  ///////////////////////////////////////////////////////////////////////////////////////////
		4 6 2 -4 3 7 4 -3 7 0   <<<<------ input taken from user 4 6 2 we took 4 & 2 =6 same as be
		4+2 is becomming == 6
		6+-4 is becomming == 2
		-4+7 is becomming == 3
		3+4 is becomming == 7
		7+-3 is becomming == 4
*/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
 int magnitude(int *brr,int isize);
 
 int main()  
 {
   int i=0,ilength=0;
   int *brr=NULL;
   
   printf("Enter Array Length:\n");
   scanf("%d",&ilength);
   
   brr=(int *)calloc(ilength,sizeof(int));
   
   if(brr==NULL)
   {
     printf("Memory allocation denied!...\n");
   }
   
   printf("Enter %d elements into array\n",ilength);
   for(i=0;i<ilength;i++)
   {
      scanf("%d",&brr[i]);
   }
   
   magnitude(brr,ilength);
   return 0;   
 }
 
 int magnitude(int *arr,int isize)  //{5 3 2 4 5 6 7};
  {
    int i=0;

  
   for(i=1;i<isize-1;i++)
   {
     if((arr[i-1]+arr[i+1])==arr[i])
     {
       printf("%d+%d is becomming == %d\n",arr[i-1],arr[i+1],arr[i]);
     }
   }
 
 }
