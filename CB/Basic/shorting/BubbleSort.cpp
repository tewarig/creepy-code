
#include <iostream>
using namespace std;
void printArr (int arr[] , int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}


void bubble(int arr[] , int n){
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n-i;j++)
      {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
      }
    }
    printArr(arr, n);
    
}


int main()
{
   int arr[5] = { 4 ,2 ,5 , 6 , 9 } ;
   bubble( arr, 5) ;
   
   
    return 0;
}
