//check agve of given number

#include<stdio.h>

 int main()
 {
   int n=0,ret=0,icnt=0,i=0,ino=0;
 
    printf("How num you want to find average\n");
    scanf("%d",&n);
    int arr[n];
    
    printf("enter values into arrray\n");
    for(i=0;i<n;i++)
     {
       scanf("%d",&arr[i]);
       ret=ret+arr[i];
       icnt=ret/n;
     }
      printf("average of gieve number if -> %d\n",icnt);
    
    
 }
 
 
 /*
   float i=0,j=0,k=0,l=0,ans=0,ret=0;
   printf("Enter value for 3 elements \n");
   printf("Enter For J-->");
   scanf("%f",&j);
   printf("Enter For k-->");
   scanf("%f",&k);
   printf("Enter For l-->");
   scanf("%f",&l);
   ans=j+k+l;
   ret=ans/3;
   
   printf("our total average for j k and l is ->  %0.2f\n",ret); 
 */
