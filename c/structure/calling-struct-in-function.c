/******************************************************************************
Write a structure to store the name, account number and balance of customers and store their information 1)write a function to print the names of all the customers having
balance less than 10000. 2)write a function to add 5000 in the balance of all the customers having more than 15000 in their balance and then print the incrimented
value of their balance.
*******************************************************************************/
#include <stdio.h>
struct bank{
    char name[20];
    int accountNo;
    int balance ;
};
void nameDis(int n, struct bank account[n]);
void moneyAdd(int n,struct bank account[n]);
int main()
{
    int n;
    printf("Enter Number of customers\n");
    scanf("%d",&n);
    printf("Enter  customer name , accountNo and balance \n");
    struct bank account[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d", &account[i].name ,&account[i].accountNo,&account[i].balance);
    }
    int choice;
    printf("Enter 1 for customers having less than 10000 \n 2 for adding 5000  to above 15000\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case1: nameDis(n, account);
        break;
        case 2:moneyAdd( n, account);
        break;
    }
    return 0;
   }
   void nameDis(int n, struct bank account[n]){
       printf("costumer with balance less than 10000 are \n");
       for(int i=0;i<n;i++)
       {
           if(account[i].balance<10000)
           {
               printf("%d",account[i].name);
           }
       }
   }
  void moneyAdd (int n, struct bank account[n]){
      printf(" Adding Money");
      for(int i=0;i<n;i++)
      {
          if(account[i].balance>15000)
          {
              account[i].balance+=5000;
              printf("Name:%s accountNo : %d New balance : %d\n", account[i].name , account[i].accountNo,account[i].balance);
              
          }
      }
  }

