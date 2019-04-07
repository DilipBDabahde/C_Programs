//accept num from user and print its binary
//input =13   ouput = 1 0 1 1
// by using this program we get binary of a  
#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;
",icnt);
     }
     else
     {
       printf("0 ");
     }
     ival=ival/2;
   }
    printf("\n");
}

int  main()
{
  UINT ival=0;
  printf("Enter a num\n");
  scanf("%d",&ival);
  binaryshow(ival);
  return 0;
}
