/*
 accept strinng from user and take one word from ser and count freq of that word into string plz return freq of that word
 
 string str="Dilip Babulal Dabhade"
 word   wd="Dilip";
 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


 int fre_counter(char *str,char *word)
 {
     char *ch1,*ch2,*ch3;
     ch1=str;
     ch2=str;
     ch3=str;
     
     
     char *world1;
     
     int icnt=0,inum=0,num=0;
     
     inum=strlen(word);
     printf("word size is=%d\n",inum);
 		 
 		 ch1=str;
 	 
 	 if(inum != 0)	
 	 { 
 		 while(*ch1 != '\0' && *ch1 != ' ')
 		  {
 		      *ch2=*ch1;
 		      ch1++;
 		      ch2++;		  
 		  }
 		  ch1++;
 		  ch2=ch3;
 		  
 		  while(*ch2 != '\0')
 		  {
 		       if(*ch2==*world1)
 		        {
 		           icnt++;
 		        }
 		       ch2++;
 		       world1++; 
 		  } 
 		  
 		  world1=word;
      ch2=ch3;
      
      if(icnt==inum)
       {
         num++;       
       }
      
   }
   else
   {
      return num;   
   }
  
 }
 
 int main()
 {
    char *cptr,*word;
    
    cptr=(char *)malloc(sizeof(char));
    word=(char *)malloc(sizeof(char)); 
   
    printf("Enter string\n");		//"Dilip Babulal Dabhade"
    scanf("%[^'\n']s",cptr);
    
    printf("Enter word\n");
    scanf(" %[^'\n']s",word);	//="Dilip"
     
    int ret=fre_counter(cptr,word); 
     if(ret==0)
    {
       printf("No freq\n");
    }
    else
    {
      printf("%d",ret);
    }
    return 0; 
    
 }
