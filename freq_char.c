//accept string from usr and one character & check freq of that character into string 
// string input= Hello world
//       output= 'l'   freq=2

#include<stdio.h>
#include<string.h>
int freq(char *str, char ch);

int main()
{
   char ch;
   char arr[40];
  
   printf("Enter string :\n");
   scanf("%[^'\n']s",arr);
   fflush(stdin);
   printf("Enter a char");
   scanf("%c",&ch);
   
   freq(arr,ch);
   return 0;   
}


int freq(char *str,  char ch)
{

  if(str==NULL || ch=='\0')
  {
    return 0;
  }
    
    int icnt=0;
  
  while(*str != '\0')
 {
    if(*str==ch)
    {
      icnt++;
    }
    str++;
 }
  printf("Freq of >> %c << is --->>%d\n",ch,icnt);

}
