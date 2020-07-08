#include<iostream>
using namespace std;

#define ll long long

void primeaSteve(int *p){
  for(int i=3; i<=100; i+=2)
  {
      p[i] = 1;
  }
  for(int i=3;i<=100; i+=2)
  {
      if(p[i]==1)
      {
          for(int j = i*i ; j<= 100; j += i)
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

     for(int i=1;i<100;i++)
     {
        
        if(p[i]>0){
            cout << i <<endl;
        }    
     }
     return 0;
 }
