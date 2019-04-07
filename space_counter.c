//accept string array from user and print no_of spaces count 
// example input= ab_abc_abcd_abcde  output = 3

#include<stdio.h>

void Spacecount(char *str,int size);
int main()
{
     int size=20;
     char crr[size];
 
    printf("Enter String:\n");
    scanf("%[^'\n']s",crr);
   
    Spacecount(crr,size);
    return 0;
}

void  Spacecount(char *str,int size)
{
   int i=0,icnt=0;
   
 /*  for(i=0; (i<size)&&(*str !='\0');i++)              // for loop use   1
   {
       if(*str==' ')
       {
         icnt++;
       }str++;
   }*/
   
 /*  while(*str != '\0')                                  //whlile loop  2
    {
       if(*str==' ')
       {
         icnt++;
       }str++;
    }   */
    /*
    do{    					                     // use of do-while loop 3
      if(*str==' ')
      {
        icnt++;
      } str++;   
    }while(*str != '\0');
    */
    
    icnt=1;	
     for(i=0; str[i] !='\0';i++) 					// for loop use  4
   {
       if(*str==' ')
       {
         icnt++;
       }str++;
   }
    
   printf("------------------\n");
   printf("we found %d spaces ok	\n",icnt);   
   printf("------------------\n");
}
