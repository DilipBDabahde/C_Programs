//wap which take array from usr as well as a range from user and return addition of range from array
///////////////////////////////////////////////////////////////////////////////////////////////////////
//accept range from user exampe:-
//  index: 0 1  2	3  4 5 6  7 8																
//int arr[10,5,44,7,69,5,24,20,19];  if we enter range:10-to-25 we will have addition of= 10+20+24+10= 64
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int addofindexrange(int *brr,int size,int suroo,int sampoon);
int main()
{
   int i=0,size=0,istart=0,iend=0;
   printf("Enter Array size:\n");
   scanf("%d",&size);
   int arr[size];

   printf("Enter %d elemts into array\n",size);
   for(i=0;i<size;i++)
   {
      scanf("%d",&arr[i]);
   }
   
   printf("Now we require range:\n");
   scanf("%d%d",&istart,&iend);

  int shewat=addofindexrange(arr,size,istart,iend);
  {
    if(shewat>0)
    {
    printf("[%d] is addition of given range\n",shewat);
    }
  	else
  	{
  	  printf("Wrong choice\nPlease add correct source and destination\n");
  	}
   }
}


int addofindexrange(int *brr,int size,int suroo,int sampoon)
{
    int i=0,sum=0;
    int help=sampoon;
    
    if(brr==NULL && size<=0)
     { return 0;}
     if(suroo>sampoon)
      {
        sampoon=suroo;
        suroo=help;
      }
    for(i=0;i<size;i++)
     { 
               
        if(brr[i]>=suroo && brr[i]<=sampoon)
        {
           sum+=brr[i];
        }
     }
	return sum;	
}

