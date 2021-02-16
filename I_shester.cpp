#include <iostream>
using namespace std;
long long  gcd(long long a,long long b)
{
 if(a%b==0) return b;
 return gcd(b,a%b);
}int main()
{
   long long  n,k,lcm; 
   cin>>n>>k;
   lcm=(n*k)/gcd(n,k);
   cout<<lcm; 
 return 0;
}