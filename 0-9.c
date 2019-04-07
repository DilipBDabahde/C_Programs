//accept digit from user and check it is char or not

#include<stdio.h>

int main()
 {
    char ch;
    printf("Enter a num bet 0-9\n");
   
    scanf("%c",&ch);
    
    if(ch>='0' && ch<='9')
     {
       printf("TRUE\n");
     }
     
     else if(ch>='A' && ch<='Z' || ch>='a' && ch<='z' )
     {
       printf("FALSE\n");
     }
 }
