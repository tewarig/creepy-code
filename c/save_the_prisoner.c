//soltion 1
//2 test cases fale
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int m;
    scanf("%d",&m);
    for(int j=0;j<m;j++)
     {
    int num,j,k;
    scanf("%d%d%d",&num,&j,&k);
    int p;
    int count =k-1;
   
    p = count+j;
   if(p>num)
   {
       while(p>num)
       {
           p=p-num;
       }
   }


    
   
    printf("%d\n",p);
}
}