#include<iostream>
using namespace std;
int main() {
	int time;
	cin>>time;
	while(time--)
	{
	int n;
	cin>>n;
	int num=0;
	while(n>0)
	{
	num += (n&1) ; //it will take last binary digit
	 n = n>>1; //left shift by 1;
	} 
    cout<<num<<"\n";
	}
	return 0;
}
