/**************************************************************************************************************************************
/*Q2.-WAP tocompare two dates entered by user. Make a structure named dateto store the elements day, month, and year to store the dates. If the dates
are equal, display "dates are equal" otherwise display "dates are not equal***********************************/
#include <stdio.h>
struct date
{
    int day;
    int mon;
    int year;
} d1 ,d2;
 int main()
 {
  
   printf("Enter  dates in DD MM YY\n");
   for(int i=0;i<1;i++)
   {
       scanf("%d %d %d", &d1.day , &d1.mon , &d1.year);
   }
    for(int i=0;i<1;i++)
   {
       scanf("%d %d %d", &d2.day , &d2.mon , &d2.year);
   }
   
   if(d1.day == d1.day && d1.mon == d2.mon && d1.year==d2.year)
   {
       printf("Dates are Equal"); 
   }else {
       printf("They are Not Equal");
   }
   return 0;}

