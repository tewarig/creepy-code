/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int fib(int n ,int  dp[]){
    
    if(n==1 || n==0)
    {
        return n;
    }
    if(dp[n]!=0)
    {
        return dp[n] ;
    }
    int ans = fib(n-1 , dp) + fib(n-2 ,dp);
    return dp[n] = ans;
}
int main()
{
  int n;
  cin>>n;
  int dp[100] = {0};
  cout<< fib(n,dp) <<"\n";

    return 0;
}
