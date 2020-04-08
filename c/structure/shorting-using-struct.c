/******************************************************************************
WAP to store student records as structures and sort them.
*******************************************************************************/
#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int rollNo;
    int class;
};
int main(){
    int n;
    printf("Enter Number of student\n");
    scanf("%d",&n);
    struct student details[n];
    printf("Enter Name , ROll no and Class \n");
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d",&details[i].name,&details[i].rollNo,&details[i].class);
    }
    sortName(n,details);
    printf("*****************OutPut******************\n");
    for(int i=0;i<n;i++)
    {
        printf("name:%s rollNo:%d class:%d \n",details[i].name,details[i].rollNo,details[i].class);
        
    }
   return 0;
    
}
void sortName (int n,struct student details[n])
{ char temp[20];
   int roll;
   int class;
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(strcmp(details[i].name,details[j].name)>0)
           {
               strcpy(temp,details[i].name);
               strcpy(details[i].name,details[j].name);
               strcpy(details[j].name,temp);
               roll= details[i].rollNo;
               details[i].rollNo=details[j].rollNo;
               details[j].rollNo=roll;
               class= details[i].class;
               details[i].class=details[j].class;
               details[j].class=class;
           }
       }
   }
}

