#include <stdio.h>
#include <string.h>
 
int main()
{
   char arr[100];
 
   printf("Enter a string to reverse\n");
     scanf("%[^'\n']s",arr); 
 
   strrev(arr);
 
   printf("Reverse of the string is \n%s\n", arr);
 
   return 0;
}
