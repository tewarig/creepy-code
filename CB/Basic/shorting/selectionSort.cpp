#include<iostream>
using namespace std;

int main(){
    int arr[5] = {5, 2, 4, 5, 6} ;
    
    for(int i=0; i<5 ; i++)
    {
        int point=i;
        for(int j=i;j<5;j++)
        {
            if(arr[j]<arr[point])
            {
                point=j ;
            }
        }
        swap(arr[i],arr[point]);
    }
    
    
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
return 0;
    
}
