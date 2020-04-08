/**Q8.-Write a program to add two distances in inch-feet using structure. The value of the distances is to be taken from user.
*/
#include<stdio.h>
struct maths{
    int inch;
    int feet;
    } d1,d2,dt;
int main()
{
  printf("Enter the d1 in feet and inch\n");
  scanf("%d %d",&d1.feet,&d1.inch);
  printf("Enter the d2 in feet and inch\n");
  scanf("%d %d",&d2.feet,&d2.inch);
  int var;
  var=(d1.feet+d2.feet+((d1.inch+d2.inch)/12))*100;
  dt.inch=(var%100)*12;
  dt.inch/=100;
  dt.feet=var/100;
  printf("******OUTPUT**************\n");
  printf("%d %d", dt.feet , dt.inch);
  
  
}
