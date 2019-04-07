//accept p.amnt and roi and year & show total interest change

#include<stdio.h>
void check(float amt,float roi,int year);

int main()
{

  float amt,roi;
  int year=0;
  printf("Enter principle amount:\n");
  scanf("%f",&amt);

  printf("Enter Rate of interest:\n");
  scanf("%f",&roi);

  printf("Enter Tenur:\n");
  scanf("%d",&year);
  
  check(amt,roi,year);

  return 0;
}


void check(float amt,float roi,int year)
  {
      float total=0;
      
      total=amt*roi*year/100;
      
      printf("your total EMI amount is: --->>> %0.2f\n",total);
  
  
  }
