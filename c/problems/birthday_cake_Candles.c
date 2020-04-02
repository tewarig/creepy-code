#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
 }
 int max=arr[0];

 for(i=0;i<n;i++)
 {
   if(arr[i]>max)
   {
       max=arr[i];
   } 
 }
 int count =0;
 for(i=0;i<n;i++)
 {
     if(arr[i]==max)
     {
         count++;
     }
 }
 printf("%d",count);

}

