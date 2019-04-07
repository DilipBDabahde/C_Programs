//accept one num from user and show output in given format
//
// ex:  input 5 ---> five times iteration
//	  output-----> 1 5 9 13 17 
//	 in above output we get diff bet two num is 4 

#include<stdio.h>
int main()
{
  int i=0,j=1,ino=5;
  while(i != ino)
  {
    printf("%d ",j);
    j=j+4;
    i++;
  }
  return 0;

}
