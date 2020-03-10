#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
int half=a/2;
int pre=half-1;
int post=half+1;
printf("*");

 for(int i=0;i<pre;i++)
 {printf(" ");}
 for(int j=0;j<post;j++)
 { printf("*");}
 printf("\n");
 for(int k=0;k<pre;k++)
 {printf("*");
 for(int i=0;i<pre;i++)
 {printf(" ");}
  printf("*");
   printf("\n");
    }
  for(int 
i=0;i<a;i++)
 {printf("*");}
 printf("\n");
for(int k=0;k<pre;k++)
 {printf(" ");
 for(int i=0;i<pre;i++)
 {printf(" ");}
  printf("*");
 for(int i=0;i<pre;i++)
 {printf(" ");}
 printf("*");
   printf("\n");
    }
 for(int j=0;j<post;j++)
 { printf("*");}
 for(int i=0;i<pre;i++)
 {printf(" ");}
 printf("*");
 
 }
