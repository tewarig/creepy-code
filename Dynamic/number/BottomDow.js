/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <climits>
using namespace std;


int rec(int n)
{   // check for zero

     int dp[100] = {0};
   
    dp[1] = 0;
    for(int i=2; i<=n;i++)
    {
        int op1, op2,op3 ;
        op1 = op2 = op3 = INT_MAX ;
        if(n%3 == 0)
        {
            op1 = dp[i/3];
        }
        if(n%2 == 0)
        {
            op2 = dp[i/2];
        }
        op3 = dp[i-1];
        
        
        dp[i] = min(min(op1,op2),op3) + 1;
    }
    return dp[n];
}

int main()
{  int n;
   cin>> n;
   int m = rec(n) ;
   cout<< m;

    return 0;
}
