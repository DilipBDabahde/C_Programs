
//accept array from user and print capital letters from array

#include<stdio.h>

 int let(char *crr);
 
 int main()
 {  
  
    char arr[10];
    printf("Enter String!\n");

    scanf("%[^'\n']s",arr);
    
   let(arr);
    
    return 0;		//arraycap_return.c 
 
 }
 
 int let(char *crr)   //Aundh Gaon  //A G
 { 
 
  if(crr==NULL)
  {
     printf("Invalid input!\n");
  }
  
  while(*crr != '\0')
   {
      if((*crr>='A') && (*crr<='Z'))
      {
          printf("%c ",*crr);
      }
        crr++;     
   }
 }     
