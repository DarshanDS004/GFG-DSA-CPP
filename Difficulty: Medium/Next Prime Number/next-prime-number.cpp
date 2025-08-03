#include <iostream>
using namespace std;

int main() {
  int n,i;
  cin>>n;
  
  int x=n+1;
  while(true)
  {
     bool prime=true;
      for(int i=2;i*i<=x;i++)
      {
          if(x%i==0)
          {
         
            prime=false;
          }
      }
      if(prime)
      {
      cout<<x;
      break;
      }
      x++;
     
   }
   return 0;
}