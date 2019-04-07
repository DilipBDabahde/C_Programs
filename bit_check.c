
#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;
UINT biton(UINT val);

BOOL main()
{
  UINT num=0;
  printf("Enter a num\n");
  scanf("%d",&num);
  int ret=biton(num);

  printf("%d\n",ret);
  
  return 0;
}

UINT biton(UINT val)
{
   UINT mask=16;
   UINT result=0;
   result=val | mask;  //or | operator use successfully
   return result;
}
