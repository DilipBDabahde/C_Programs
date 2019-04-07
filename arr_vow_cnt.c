//accept stringfrom s user and count vowels into string
//
//  Davat   2  a a
//

#include<stdio.h>
#define size 50
 int Vow(char *count_vow)
  {  
     int i=0,icnt=0;
     while(count_vow[i] != '\0')
     {
       if(count_vow[i]=='A'||count_vow[i]=='a'||count_vow[i]=='e'||count_vow[i]=='E'||count_vow[i]=='o'|| count_vow[i]=='O' || count_vow[i]=='u'||count_vow[i]=='U'||count_vow[i]=='i'||count_vow[i]=='I')
        {
          printf("%c ",count_vow[i]);
           icnt++;
        }
        
         count_vow++;
     }
     printf("\ntotal voweld %d\n",icnt);
     printf("\n");
     
  }
  
  
  int main()
  {
     char arr[size];
     printf("Enter string array \n");
     scanf("%s",arr);
     Vow(arr);
     return 0;
  
  }
