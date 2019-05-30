#include<stdio.h>
#define SIZE 5

int arr[SIZE];
int Front=-1;
int Rare=-1;

void Enqueue(int value)
 {
    if((Front==0) && (Rare==SIZE-1))
    {
      printf("Q is full\n");
      return;
    }
    else
    {
       if(Front == -1)
        {
         Front=0;
        }                
        Rare=(Rare+1)%SIZE;
        arr[Rare]=value;    
    }    
 }
 
void Display()
 {  
   int j=0;
   
   if(Front==-1)
   {
     printf("Nothing to show\n");
     return;
   }
   
   for(j=Front;j!=Rare;j=(j+1)%SIZE)
   {
    printf("%d ",arr[j]);
   } 
   printf("%d\n",arr[j]);
 }
 
 int Dequeue() 
 {
    
    int value=-1;
    
    if(Front == -1)
     {
       printf("Q is empty\n");
       return value;
     }
     else
     {
      value=arr[Front];
      if(Front==Rare)
       {
         Front=-1;
         Rare=-1;
       }
       else
       {
        Front=(Front+1)%SIZE;     
       }
       return value;
     }
    
 } 
 
int main()
 {
  
  Enqueue(11);
  Enqueue(21);
  Enqueue(51);
  Enqueue(101);
  Enqueue(121);
   
  Display();
  printf("%d\n",Dequeue());  
  printf("%d\n",Dequeue());  
   
  Enqueue(55);   
  Enqueue(25);  
  Display();
 
 return 0;
 } 
