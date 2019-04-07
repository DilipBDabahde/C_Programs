//cdrom media tray opening program

#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/ioctl.h>
#include<unistd.h>
#include<linux/cdrom.h>
#include<stdio.h>

 int main(int argc, char *argv[])
 {
   int fd,ret;
   
    if(argc < 2)
     {
        fprintf(stderr,"usage:%s<device is ejected>\n",argv[0]);
        return 1;  
      }
      
      fd=open(argv[1], O_RDONLY |O_NONBLOCK);
      printf("%d\n",fd);
      if(fd<0)
       {
         perror("open");
         return 1;
       }
   
   //send eject cmd to cd rom device
   
   ret=ioctl(fd,CDROMEJECT,0);
       printf("%d\n",ret);
   if(ret)
   {
      perror("ioctl");
      return 1;
   }   
   
   ret=close(fd);
   if(ret)
    {
      perror("close");
      return 1;
    }
       
   return 0;     
      
 } 
