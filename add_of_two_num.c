//accept array from user and println //add_of_two_num.c
// in this program we take input from user and make add of 1st and third and check it with 2nd
///
// int arr[6]={3,5,2,7,5};
//             3   2      =5  ok
//		     5    7   =12 wrong		
//			 2    5 =7  ok
#include<stdio.h>
#include<stdlib.h>
int midcenter(int *arr,int size);

int main()
{
    int i=0,size=0;
    int *ptr=NULL;
    
    printf("Enter array size:\n");
    scanf("%d",&size);
    
    ptr=(int*)calloc(size,sizeof(int));
    
    if(ptr==NULL)
    {
       printf("No value allocated\n");
    }
    
     
    printf("Enter %d elemts into array\n",size);  ///c/add values into array	
    for(i=0;i<size;i++)
     {
       scanf("%d",&ptr[i]);
     }
    
    midcenter(ptr,size);
    return 0;
}


int midcenter(int *arr,int size)
{
   int i=0,sum=0;
   for(i=1;i<size-1;i++)   //1 3 2 5 3  -8
   {
      sum=arr[i-1]+arr[i+1];
      if(sum==arr[i])
     {
       printf("%d %d %d  between is -->>>> %d\n",arr[i-1],arr[i],arr[i+1],arr[i]);
     }
   }
   printf("\n");

}

