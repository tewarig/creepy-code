#include<stdio.h>
 void swap(int*a,int*b)
 {
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
  printf("%d%d",a,b);
 }
void main()
 { 
 int a,b,sum;
 scanf("%d%d",a,b);
 sum = swap(&a,&b);
 }

