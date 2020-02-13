#include<stdio.h>
void main()
{
 int a;
 scanf("%d",&a);
 int *p;
 p =&a;
 printf("%d",p); //you can also use %p 
}
