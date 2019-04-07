//accept input from user and print below output
// input=Hello
// output=H e l l o	
//	    H e l l o
//	    H e l l o	
//	    H e l l o
//	    H e l l o

#include<stdio.h>
int pattern21(char *str);
int main()
{
	char arr[55];
	printf("Enter string:\n");
	scanf("%[^'\n']s",arr);
	pattern21(arr);
	return 0;
}

int pattern21(char *str)
{
   int i=0,j=0,icnt;
    
   for(i=0;str[i] !='\0';i++)
    {
      for(j=0;str[i] !='\0';j++)
      {
        printf("%c ",str[j]);
      }printf("\n");
      
     }printf("\n");
}
