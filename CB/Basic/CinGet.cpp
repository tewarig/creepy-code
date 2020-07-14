/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <csting>
using namespace std;

stringExtract( string c, int key){
    char *s = strtok((char*)c.c_str(), " ");
    while(key>1)
    {
        s = strtok(NULL , " ");
        key -- ;
    }
    return (string)s;
}

int main()
{
 int n;
  cin>>n;
  cin.get();
  string a[100];
  for(int i=0;i<n;i++)
  {
      getline(cin,a[i]);
  }
  
  int n;
  string reversal , ordering;
  cin>>n>>reversal>>ordering ;
    return 0;
}

