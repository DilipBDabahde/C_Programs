#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    char arr[50];
    char crr[50];
    
    printf("Eneter a char:");
    scanf("%c",&ch);
 
    printf("Enter string:");
    scanf("%s",arr);
    
    printf("Enter sentence:");
    scanf(" 	%[^\n]%*c",crr);
    
    printf("%c\n%s\n%s\n",ch,arr,crr);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
