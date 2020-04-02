#include<stdio.h>
int main(){
   /* 2D array declaration*/
   char park[100][100];
  int n,m;
 scanf("%d%d",&n,&m);
 int min,str;
 scanf("%d%d",&min,&str);

 
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<n; i++) {
      for(j=0;j<m;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%c", &park[i][j]);
      }
   }
   //Displaying array elements
   
   for(i=0; i<n; i++) {
      for(j=0;j<m;j++) {
         if(park[i][j]==".")
         {str=str-3;}
         else if(park[i][j]=="*")
         {str=str+4;}
         else if(park[i][j]=="#")
         {break;}
            
      }
   }
   if(str>min)
   {printf("yes %d",str);
   }
   else
   {printf("no %d",str);}
   return 0;
}
