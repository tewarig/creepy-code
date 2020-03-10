#include<stdio.h>
int zero(int a)
{
  int count = 0;
  int num;
  while(a>0)
  {
	  num=a%10;
          // printf("num %d\n",num);
	  if(num == 0 )     //use 0 instead of '0' seriously i got suck here
	  {
		  count++;
	  }
	  a=a/10;
  }
 //printf("count %d",count);
  return count;
}
int main (void) {
	int c;
	scanf("%d",&c);
	int mult=1;
	while(c>0)
	{
     mult=mult*c;
	 c--;
	 
	}
	printf("%d",mult);
	int z= zero(mult);

	printf("%d",z);
	return 0;
}
