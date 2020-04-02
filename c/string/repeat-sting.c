#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 gets(str);
 int l= strlen(str);
// printf("%d",l);
 int i;
 for(i=0;i<l;i++)
   //printf("%d",i);
   {
    while(str[i]==str[i+1])
  { int k = i;
    for(k;k<l-1;k++)
    {
     str[k]=str[k+2];
     }
  }
 }
 puts(str);
return 0;
}
