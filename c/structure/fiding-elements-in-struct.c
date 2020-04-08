/*Q5.-An automobile company has a serial number for engine parts starting from AA0 to FF9. Other characteristics of parts to be specified in a
structure are: material, quantity and date of manufacture. Write a program to retrieve information on parts with serial number between BB1 and CC6.
*/
 #include<stdio.h>
  struct machine{
  char serialNo[4]; 
  char chrt[20];
  int quantity;
  char dom[11];
 };
   void display(int n,struct machine details[60]);
   int main(){
   int n;
  printf("enter the number of parts\n");
  scanf("%d",&n);
  struct machine details[n];  
   printf("enter Serial number, Characteristics, Quantity & date of manufacture\n");
    for(int i=0;i<n;i++)
    {
      
         scanf("%s %s %d %s",&details[i].serialNo,&details[i].chrt,&details[i].quantity,&details[i].dom);
      }
     display(n,details);
     return 0;  
    }  
   void display(int n,struct machine details[n]){
   for(int i=0;i<n;i++)
   {
     if((details[i].serialNo[0]>='B' && details[i].serialNo[2]>='1') && (details[i].serialNo[0]<='C' && details[i].serialNo[2]<='6'))
     {
      printf("serial no:%s\t material:%s\tquantity:%d\tdate of maufacture:%s\n",details[i].serialNo,details[i].chrt,details[i].quantity,details[i].dom);
   }
   }
   }
