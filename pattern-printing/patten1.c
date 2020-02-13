//in this program we will print
//A
//ABA
//ABCBA
//ABCDCBA
//ABCDEDCBA

#include<stdio.h>
void main()
 {
 char a= 'A';
 for(int i=0;i<5;i++)
 { 
  for(int j=0;j<i;j++)
 {
  printf("%c",a+j);
  }
  for(int k=i;k>=0;k--)
 {printf("%c",a+k);
   }
 
  
  printf("\n");}
  
 }
