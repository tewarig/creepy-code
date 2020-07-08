#include<iostream>
using namespace std;

#define ll long long

void primeaSteve(int *p){
  for(  int i=3; i<=1000000; i+=2)
  {
      p[i] = 1;
  }
  for( ll int i=3;i<=1000000; i+=2)
  {
      if(p[i]==1)
      {
          for(ll int j = i*i ; j<= 1000000; j += i)
          {
              
                  p[j] = 0;
              
          }
      }
  }
  p[0] = p[1] = 0;
  p[2] = 1;

}  
  
 
 
 
 int main(){
     
     int p[1000005] = {0};
     
     primeaSteve(p);
	 int n;
	 cin>>n;
	 while(n--)
	 {
		 int a,b;
		 int count = 0;
		 cin>>a>>b;
		 for(int i=a;i<=b;i++)
		 {
            if(p[i]>0)
			{
				count++;
			}
		 }
      cout<<count<<"\n";
	 }

     
     return 0;
 }
