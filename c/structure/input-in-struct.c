/**************************************************************************************************************************************
WAP to program to store roll no, name and age of a student using  structure and then print the details of roll no 2
*******************************************************************************/
#include <stdio.h>
struct student
{
    int rollNo;
    char name[20];
    int age;
};
 int main()
 {
   struct student trial[5];
   printf("Enter Roll no , Name ,Age \n");
   for(int i=0;i<5;i++)
   {
       scanf("%d %s %d", &trial[i].rollNo , &trial[i].name , &trial[i].age);
   }
   printf("****************output**************\n");
   printf("%d %s %d",trial[1].rollNo , trial[1].name , trial[1].age);
    return 0;
}

