//accept 2 string from user and concate second str2 to str1
//example   str1=DILIP
//		str2=DABHADE
//		concatination=DILIPDABHADE

#include<stdio.h>
#define MAX 50
int charstr(char *start,char *end);
int main()
{
  char Arr[MAX]={"DILIP"};
  char Brr[MAX]={"DABAHDE"};
 
  int ret=charstr(Arr,Brr);
  printf("Finally we found concated str---->>>%s\n",A	98rr);
  return 0;
}

int charstr(char *start,char *end)
{
	while(*start !='\0')
    {
       start++;
    }
    
    while(*end !='\0')
    {
      *start=*end;
      end++;
      start++;    
    }
    
    *start='\0';

}
