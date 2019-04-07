//accept char from user and check weather it is char or not
//entered  input-> ch=a  output=True
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
  if(str>='a' || str>='z' ||str>='A'||str>='Z')
  {
    printf("Your entered is Char:--->>True\n");
  }
  else
  {
    printf("Your entered is not char:--->>False \n");
  }  

}
