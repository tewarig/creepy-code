#include<stdio.h>
 void main()
 {
  static int i=5;
  if(i>0)
  {
    printf("%d",i);
    i--;
   main();}

 }
