#include<stdio.h>
#include<stdlib.h>
int main() {

  int size=0,sum=0;
  int *ptr=NULL;
  printf("Enter array size\n");
  scanf("%d",&size);
  ptr=(int*)malloc(size*sizeof(int));
  
  printf("Enter %d value",size);
  for(int i=0;i<size;i++)
  {
    scanf("%d ",&ptr[i]);
    sum+=ptr[i];
  }
  printf("\n%d is total\n",sum);

  return 0;
}	
