#include<unistd.h>
#include<stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include<stdlib.h>
#define BUFFSIZE 4096  //
 int main()
 {
   int n;
   char buf[BUFFSIZE];
   
   while((n=read(STDIN_FILENO,buf,BUFFSIZE))>0)
    if(write(STDOUT_FILENO,buf,n)!=n)
    
    err_sys("read error");
    
    if(n<0)
    err_sys("read errror");
    exit(0);
 }
 
 
