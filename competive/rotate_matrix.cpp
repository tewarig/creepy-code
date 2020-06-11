#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	int k=n-1;
	for(int i=k;i>=0;i--)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[j][i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
