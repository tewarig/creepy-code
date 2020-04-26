#include<stdio.h>
 void main()
 {
  int i=0,k=3;
  i+= func(k);
  i+= func(k);
  i+= func(k);
  printf("%d",i);
  }
  int func(int j)
  {
  static int m=2;
  m=m+j;
  return m;}
