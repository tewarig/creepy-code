/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <climits>
using namespace std;


int rec(int n , int dp[])
{   // check for zero
    if(n == 1)
    {
        return 0;
    }
    if( dp[n] != 0){
        return dp[n];
    }
    int op1,op2,op3  ;
    op1 = op2 = op3 = INT_MAX;
    if(n%3 == 0)
    {
        op1 = rec(n/3,dp) + 1; 
    }
    if(n%2 == 0)
    {
        op2 = rec(n/2,dp)  + 1;
    }
    op3  =  rec(n-1, dp) + 1;
    
    
    int ans =  min( min(op1,op2) , op3);
    return dp[n] = ans ;
}

int main()
{  int n;
   cin>> n;
   int dp[100] = {0};
   int m = rec(n,dp) ;
   cout<< m;

    return 0;
}
