
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
        int e = arr[i];
        int j = i - 1;
        while(j>=0  && arr[j]>e)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = e ;
    }
    
    printArr(arr, n);
    
}


int main()
{
   int arr[5] = { 4 ,2 ,5 , 6 , 9 } ;
   bubble( arr, 5) ;
   
   
    return 0;
}
