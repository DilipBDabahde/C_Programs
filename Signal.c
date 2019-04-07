#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>

static void signal_handler(int signo)
 {
   if(signo==SIGINT)
    printf("Caugt SIGINT!\n");
    
   if(signo==SIGTERM)
    printf("Caught SIGTERM\n"); 
    
   else
   {
      fprintf(stderr,"unexptecter signnal\n");
     exit(EXIT_FAILURE);
   }
   
   exit(EXIT_FAILURE); 
 }
 
 int main(void)
 {
   if(signal(SIGINT,signal_handler)==SIG_ERR)
   {
     fprintf(stderr,"Cannot handle sigint\n");
     exit(EXIT_FAILURE);
   }
   
      if(signal(SIGTERM,signal_handler)==SIG_ERR)
   {
     fprintf(stderr,"Cannot handle sigterm\n");
     exit(EXIT_FAILURE);
   }
   
      if(signal(SIGPROF,SIG_DFL)==SIG_ERR)
   {
     fprintf(stderr,"Cannot reset SIGPROF\n");
     exit(EXIT_FAILURE);
   }
   
   
      if(signal(SIGHUP,SIG_IGN)==SIG_ERR)
   {
     fprintf(stderr,"Cannot reset SIGHUP\n");
     exit(EXIT_FAILURE);
   }
   
    for(;;)
    pause();
    
    return 0;
 
 }
