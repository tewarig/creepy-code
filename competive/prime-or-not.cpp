#include<iostream>
using namespace std;

int main() {
    
	int n;
	cin>>n;
	while(n--)
	{
	    int a,b;
	    cin>>a>>b;
		int num1=0;
	    for(int i=a;i<=b;i++)
	    {    int count=0;

	        for(int j=2;j<i;j++)
	        {
	            if(i%j==0)
	            {
	                break;
	            }else{
	                count++;
	            }
	        }
			int num = i-2;
			if(num==count)
			{
              num1++;
			} 
		
	    }
		cout<<num1<<"\n";
	}
	return 0;
}
