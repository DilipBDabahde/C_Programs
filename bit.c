#include<stdio.h>

void calculate_the_maximum(int n, int k) {
    printf("%d\n",((k-1)|k)<=n? (k-1):(k-2));
    printf("%d\n",((k-1)&(k-2))==0? (k==3?0:(k-2)) : (k-1) );
    printf("%d\n", k-1);
}


 int main()
 {  
 
  int i,k;
  printf("Enter two value\n");
  scanf("%d%d",&i,&k);
  calculate_the_maximum(i,k);
  return 0;
 }
