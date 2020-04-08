/*Q7.-Create a structure named date having day, month and year asits
elements store the current date in the structure. Now add 45 days to
the current date and display the final date.
*/


#include<stdio.h>
 int leap_year(int y){
   int flag=0;
  if((y%4==0 && y%100!=0) || y%400==0)
   {
    flag=1;
   }
   return flag;
   }
  int month(int mon, int ly){ 
  int month=30;
  switch(mon)
  {
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12:
      month=31;
      break;
  case 2: month=28+ly;
 }
 return month;
}
 struct date{
 int day;
 int month;
 int year;
 };
   int main(){
      int days,day,skip=45;
   struct date dt;
   printf("enter current date in the format dd mm yyyy\n");
   scanf("%d%d%d",&dt.day,&dt.month,&dt.year);//input date
   if(dt.month>0 && dt.month<13 && dt.year>0 && month(dt.month,leap_year(dt.year))>=dt.day) 
   {
   days=month(dt.month,leap_year(dt.year));
    day=skip-(days-dt.day); 
    dt.month++;
   if(dt.month>12)
   {
   dt.month-=12; 
   dt.year++;
   }
   while(day>days) 
   {
   days=month(dt.month,leap_year(dt.year));
   if(day==days)
   {
   break; 
   }
   day=day-days;
   dt.month++;
   if(dt.month>12)
   {
    dt.month-=12;
    dt.year++; 
   }
   }
     printf("resultant date:\nday:%d month:%d year:%d",day,dt.month,dt.year);
   }
    else{
     printf("please enter valid date");
    }
   return 0;
  }
