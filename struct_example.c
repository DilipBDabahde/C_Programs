//accpet data from use of std and show it on console

#include<stdio.h>

struct std
 {
  char name[20];
  int RNum;
  int S_num;
  float Marks; 
 }; 
 
 int main()
  {
    
    int i=0,size=0;
    printf("Enter array size\n");
    scanf("%d",&size);
    printf("Enter %d values for pc cc ac\n",size);
    struct std arr[size];		    
    
    for(i=0;i<size;i++)
     {  
        printf("Enter your full name[%d]:",i+1);
	scanf(" %[^'\n']s",arr[i].name);
	printf("Enter your R_num:");
	scanf("%d",&arr[i].RNum);
	printf("Enter your Seat_num:");
	scanf("%d",&arr[i].S_num);  
	printf("Enter your Marks:");
	scanf("%f",&arr[i].Marks);       
     }
   
   printf("Name RNum Seat MArks\n");
   for(i=0;i<size;i++)
     {
      printf("%s %d %d %f\n",arr[i].name,arr[i].RNum,arr[i].S_num,arr[i].Marks);
     }

     return 0;     
  }	
