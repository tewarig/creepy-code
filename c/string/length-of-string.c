#include<stdio.h>
 int main()
 {
 char s[]="Gaurav";
 int i;
 for(i=0; s[i] != '\0';i++); //important
  printf("%d",i);
 return 0;}
