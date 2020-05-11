#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
   int hh,mm,ss;
   char t[10];
   gets(t);
  int count =0;
  if (t[0]==49)
  {
      count++;

  }
  if(t[1]==50)
  {
      count++;
  }
   if(t[8]==80)
   {
       if(count != 2)
        {
          t[1]=t[1]+2;
           t[0]=t[0]+1;
                  if(t[1]>57)
         {
             t[1]=t[1]-10;
             t[0]=t[0]+1;
         }
        }
   }
    else if(t[8]==65)
       {
         if(count==2)
          {
            t[0]=t[0]-1;
            t[1]=t[1]-2;
                   }
       }
   for(int i=0;i<8;i++)
   {
      printf("%c",t[i]);
   }
    return 0;
}
