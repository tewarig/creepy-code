#include<stdio.h>
 void main()
 {
  int i=0,s=0;
  int arr[6]={4,2,6,0,5,10};
  while (arr[i]) 
  {
  s = s+arr[i];
  i++;
  }
  printf("%d",s); 
  
  }

