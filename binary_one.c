//accept num from use  and print num of binary --1--  into to binary
//  when we take input from user convert its finary first and print num 1's count on screen  
//  example:
//  input=13
//  output			2 |__13_|
//				2 |__6__|1
//				2 |__3__|0
//				2 |__1__|1
//				  |     |1   so here we found 1 three times  output should be ----->>> 3

#include<stdio.h>
#define VAL 1
int binaryone(int num);		 //function declaration
int main()  			//entry point function
{           //main fun body startig
  int icnt=0;  //var declaration with 0
  printf("Enter a num to check num of 1's into it's binary\n");
  scanf("%d",&icnt);	//taking input from user 
  int ret=binaryone(icnt);		//calling to user defined fun from main function 
  printf("num of 1 count is---->> %d\n",ret);
  return 0;
}

int binaryone(int num)	//user defined fun definition
{
  int ino,count=0,digit=0;  //3 var declaration
  while(num != 0)
   {
       digit=num%2;
       if(digit==VAL)
       {
          count++;
       }
       num=num/2;
   }

  return count;	
}
