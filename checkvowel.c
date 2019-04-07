//accept one char from user and check it is vowel or not 
//if it is vowel  return true else false

#include<stdio.h>

void check(char vowel);

int main()
 {
 
   char ch;
   printf("Enter a char:\n");
   scanf("%c",&ch);
   
   check(ch);
   return 0; 
 }
 
 void check(char vowel)
 {
  
 
  if((vowel=='A' ||vowel=='a' || vowel=='E' || vowel=='e' || vowel=='I' || vowel=='i' || vowel=='O' || vowel=='o' || vowel=='U' || vowel=='u'))
  {
  printf("Given Character is Vowel--->>>");
  printf("TRUE\n");
  }
  else
  {   
  	printf("Given Character is Constant--->>>");
	printf("FALSE\n");
  } 
 
 }
