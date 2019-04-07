//accept char from user and check weather it is char or not
//entered  input-> ch=abc35  output=True
// in this program we take one value from user and check
// it is character or num
// if we found a char then return  ==> True
// else ==>  false
// if u want to check given value is num then remove below code comment
#include<stdio.h>
#include<stdlib.h>

void checkchar(char str);

int main()
{
  char ch;
  printf("Enter a char:\n");
  scanf("%c",&ch);
  checkchar(ch);
  return 0;
}

void checkchar(char str)
{
         if(str=='!'||str=='@'||str=='#'||str=='$'||str=='%'||str=='^'||str=='&'||str=='*')
         {
           printf("Invalid input\n");
           
         }
   
	  else if((str>='a' && str<='z' ) || (str>='A' && str>='Z'))
	  {
	    printf("Your entered is Char:==>>True\n");
	  }
	      else if(str%1==0)
	  {
	    printf("You entered is :==> Num\n");
	  } 
	  else 
	  {
	    printf("Your entered is not char:==>>False \n");
	  }
}
