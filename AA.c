#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/ioctl.h>
#include<unistd.h>
#include<linux/cdrom.h>
#include<stdio.h>
#include<stdlib.h>
#include <sys/inotify.h>
#define BUF_LEN 50
 int main()
  {
     /*
    char buf[BUF_LEN] __attribute__((aligned(4)));
    ssize_t len, i = 0;
    int fd;
    
    len=read(fd,buf,BUF_LEN);
     
     while(i<len)
     {
       struct inotify_event *event=(struct inotify_event *) &buf[i];
       
       printf("wd=%d mask=%d cookie=%d len=%d dir=%s\n",event->wd, event->mask, event->cookie,event->len,(event->mask & IN_ISDIR) ?"yes":"no");
       
     //if there is a name print it
     printf("%d",event->len);
     if(event->len)
     {
       printf("name=%s\n",event->name);
     }
     
     //update the index to the start of the next event
     
      i=i+sizeof(struct inotify_event)+event->len;
       
       
     }  
  
 
  ////////////////////////////
   
    char buf[BUF_LEN] __attribute__((aligned(4)));
    ssize_t len, i = 0;
    int fd;
  
    struct inotify_event *event=(struct inotify_event *) &buf[i];
  
  
    if(event->mask== IN_MODIFY)
     printf("File was written to!\n");
     
    else if(event->mask== IN_Q_OVERFLOW)
      printf("OPPS, que overflowed!\n"); 
  
  
  ///////////////////////////////////////////////
  char buf[BUF_LEN] __attribute__((aligned(4)));
    ssize_t len, i = 0;
    int fd;
  
    struct inotify_event *event=(struct inotify_event *) &buf[i];
    
    if(event->mask & IN_ACCESS)
     printf("The file was read from!\n");
     
     if(event->mask & IN_Q_OVERFLOW)
      printf("The file's backing device was unmounted!\n");
    
    if(event->mask & IN_ISDIR)
     {
       printf("The file is a");
     }

   //////////////////////
   int wd,fd;
  
   int ret = inotify_rm_watch (fd, wd);
    
   printf("%d\n",ret);
   if (ret)
   perror ("inotify_rm_watch");
       */   
   
   unsigned int queue_len;
   int ret,fd	; 
   
   ret=ioctl(fd,FIONREAD,&queue_len);
   if(ret<0)
   perror("ioctr");
   else
   printf("%u bytes pending in queue\n",queue_len);
   
        
     
  }
