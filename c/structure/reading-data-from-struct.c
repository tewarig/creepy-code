/*Q6.-Write a program to read a set of name, roll no, date of birth and date of admission consists of three members such as day, month and year
as a separate structure.*/
#include<stdio.h>
 struct date{
 int date;
 int month;
  int year; 
  };
 struct student{
 char name[20];
  int roll_no;
  struct date dob;
 struct date doa;
 };
  int main(){
  struct student s[5]={//predefined variables
     {"Gaurav",17,{12,12,2001},{10,10,2019}},
     {"Tewari",32,{23,01,2001},{21,12,2019}},
     {"Saueav",77,{19,10,2002},{31,05,2017}},
      {"Arjun",13,{12,12,2001},{21,05,2017}},
     {"Mohit",12,{29,02,2000},{20,12,2018}}
     };
    for(int i=0;i<5;i++)
    {
     printf("\nname:%s\troll no:%d\tdate of birth(dd/mm/yyyy):%d/%d/%d\tdate of admission(dd/mm/yyyy):%d/%d/%d",
     s[i].name,s[i].roll_no,s[i].dob.date,s[i].dob.month,s[i].dob.year,s[i].doa.date,s[i].doa.month,s[i].doa.year);
     }
     return 0;
     }
