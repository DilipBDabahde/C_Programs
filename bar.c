#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<error.h>



int version=1;

  int copy(int old,int new);
 int main(int argc,char *argv[])
 {
 
   int fdold,fdnew;
   
   if(argc != 3)
   {
     printf("need 2 arguments for copy programs\n");
     exit(1);
   }
   
   fdold=open(argv[1],O_RDONLY);
   if(fdold==-1)
   {
     printf("canot open file %s\n",argv[1]);
     exit(1);
   }
   
   fdnew=creat(argv[2],0666);
   if(fdnew==-1)
   {
      printf("canot create file %s\n",argv[2]);
      exit(1);
   }
   
   copy(fdold,fdnew);
   exit(0);
 }
 
  int copy(int old,int new)
  {
     int count;
     int buffer;
     while((count ==read(old,buffer,sizeof(buffer)))>0)
     write(new,buffer,count);
  
  }
 
 
