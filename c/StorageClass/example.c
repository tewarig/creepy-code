#include <stdio.h>


extern int variable1;
int variable1 = 10;


 void storage(){
    
     static int variable2;
     auto int variable3;
     register variable4;
    // printf("variable1 %d \n",variable1);
     printf("variable2 %d \n",variable2);
     printf("variable3 %d \n",variable3);
     printf("variable4 %d \n",variable4);
     
     variable2 += 1;
     variable3 += 1;
     variable4 += 1;
 }
 
int main()
{
 printf("variable1 %d \n",variable1);
 storage();
 storage();
 storage();
 
 
 return 0;
 
}



