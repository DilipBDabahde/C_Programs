/*
Data structure in this program we are using "Stack" DATA STRUCTURE 
and we allcate memory too stack statically in ARRAY only one time

But Array gets size is created dynamicaaly and that is fix on this fix size of push and pop once array space gets full we have to stop adding values into stack
*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void push(int [],int,int);
int Pop(int [],int);
void Display(int [],int);

int Top=-1;  //globally diclared

int main()
 { 
   int size=0,iret=0;
   int *ptr=NULL;
   printf("Enter stack size\n");  // we allocate stack size in the form of array
   scanf("%d",&size);
   
   
   ptr=(int *)calloc(size,sizeof(int)); 
   
   printf("------------------------------------\n");
   printf("inserted values into statck\n");
   
   push(ptr,size,11);
   push(ptr,size,21);
   push(ptr,size,51);
   push(ptr,size,101);
   Display(ptr,size);
   
   printf("\n------------------------------------\n");
   printf("Deleted last values\n");
   iret=Pop(ptr,size);
   printf("[%d]--is pop value\n",iret);
   Display(ptr,size);  
   printf("------------------------------------\n");
   
   free(ptr);
   
 return 0;
 }
 
 void push(int iarr[],int ilength,int ivalue)         ///////////// all values gets added in last 
 {
  
  if(Top==ilength-1)
   {
    return;
   }
   else
   {
     Top++;
     iarr[Top]=ivalue;   
   }
 }
 
 void Display(int ibrr[],int ilength)
 {
     
     for(int i=0;i<=Top;i++)
      {
       printf("|%d",ibrr[i]);      
      }
      printf("|NULL-->\n");  
 }
 
 int Pop(int crr[],int ilength)
 {
   int temp=0;
   
   if(Top==-1)
   {
    return -1;
   }
   else
   {
      temp=crr[Top];
      Top--;  
   }
   
   return temp; 
 }
