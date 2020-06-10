#include<iostream>
using namespace std;
int main () {
	 long long int n;
	cin>>n;
	int rem=0;
    while(n>1)
    {
        if(n>=5)
        {
           rem +=n/5; 
        }
        n=n/5;
    }

   cout<<rem;
	return 0;
}
