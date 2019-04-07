#include<stdio.h>
int main()
 {
    int i=10;
    int *ptr=&i;
    int **ptr1=&ptr;
    int ***ptr2=&ptr1;
    printf("%p\n",&i); 
    printf("%p \n",ptr);
    printf("%p \n",ptr1);
    printf("%d \n",***ptr2);
    return 0;	
 }
