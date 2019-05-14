import java.io.*;
import java.lang.*;
import java.util.*;

class Mx_Diff
 {
 
 
 
 
 
 
 
 
 
 
 
 
 public static void main(String args[])
  {
    Scanner s=new Scannner(System.in);
    System.out.println("Enter array size");
    
    int size=s.nextInt();
    
    int arr[]=new int[size]; //memory allocated of givenn size
    
    for(int i=0;i<size;i++)
    {
      System.out.println("Enter Element:"+i+1);
      arr[i]=s.nextInt();
    }
    
      for(int i=0;i<size;i++)
    {
      System.out.println("Enter Element:"+arr[i]);
    }
    
  
  }
 
 
 }
