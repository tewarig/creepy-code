/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int profit( int arr[] , int i ,int j, int y)
{   //base case
    if(i>j)
    {
        return 0;
    }
    int op1 = arr[i]*y + profit(arr,i+1,j,y+1);
    int op2 = arr[j]*y + profit(arr,i,j-1,y+1);
    
    return max(op1,op2);
    
    
}


int main()
{
    int wines[] = {2,3,5,1,4};
    int n = sizeof(wines)/sizeof(int) ;
    int y=1;
    cout<< profit(wines,0,n-1,y);
    return 0;
}

