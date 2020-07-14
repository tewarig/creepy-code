/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <climits>
using namespace std;

int minCoin(int n,int coins[] ,int T ,int dp[])
{
    if(n == 0){
        return 0;
    }
    if(dp[n]!=0)
    {
        return dp[n];
    }
    int ans = INT_MAX;
    for(int i=0;i<T;i++)
    {
        if(n-coins[i]>=0)
        {
            int subprob = minCoin(n-coins[i], coins , T ,dp);
            ans  = min(ans, subprob+1);
        }
    }
    dp[n] = ans;
    return ans;
}



int main()
{  int n =15;
   int coins[]  = {1,7,10} ;
   int dp[100] = {0};
   int T = sizeof(coins)/sizeof(int); 
   cout << minCoin(n, coins , T , dp) ;
   
  
  

    return 0;
}
