/*Q10.-Write a structureto store names, salary and hours of work per day of 10 employees in a company. WAP to increase the salary depending on the
number of hours of work per day as follows and then print the name of allthe employees along with their final salaries using functions.hours of work per day8
*/
#include<stdio.h>
struct employees{
    char name[30];
    int sal;
    int hours;
    
};
void salary(struct employees work[3]);
int main(){
    struct employees work[3]={
        {"Gaurav",50000},{"Tewari",60000},{"Yash",100000}
    };
    printf("Enter working of employees\n");
    for(int i=0;i<3;i++)
    {
        printf("enter working hours\n");
      
        
            printf("%s \n",work[i].name);
            scanf("%d\n",&work[i].hours);
        
    }
            salary(work);

    
    printf("\n");
    for(int i=0;i<3;i++)
    {

    printf("name:%s salary:%d work hours:%d\n",work[i].name,work[i].sal,work[i].hours);
  } 
   return 0;
}

void salary(struct employees work[10])
 {
   for(int i=0;i<10;i++) 
   {if(work[i].hours>=12)
 {
 work[i].sal+=4000;
 }
 else if(work[i].hours>=10)
 {
 work[i].sal+=2500;
 }
 else if(work[i].hours>=8)
 {
 work[i].sal+=1500;
 }
 }
 }
