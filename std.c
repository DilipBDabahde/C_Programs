#include<Dilip.h>

 int main()
 {
    int c;
    while((c =getc(stdin)) !=EOF)
     if(putc(c,stdout)==EOF)
      
      perror("output error");
      
      if(ferror(stdin))
      perror("Input error");
      
      exit(0);
 }
