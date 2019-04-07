//accept num from user and disp freq of uupercaselet
//exa  Dilip 	1
//     MI    	2
//	 MCA	 	3
//	 std		0


#include<stdio.h>
void freqsmall(char *str);
int  main()
{
  char arr[44];
  printf("Enter string:\n ");
  scanf("%[^'\n']s",arr);
  freqsmall(arr);
  return 0;
}

void freqsmall(char *str)
{
   int ino=0;
   while(*str != '\0')
   {
      if(*str>='A' && *str<='Z')
      {
        ino++;
      }
      str++;
   }
    printf("We found -->>%d<<-- small letters\n",ino);   
}
