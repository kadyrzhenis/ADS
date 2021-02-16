#include <iostream>
using namespace std;
int gcd(int a,int b)
{
  if(a%b==0) return b;
  return gcd(b,a%b);
}
int main()
{
    int m,n,a,b,c,sum;
    cin>>m>>n>>a>>b;
    c=(n*b)/gcd(n,b);
  sum=(m*b+a*n)/gcd(n,b);
  int l=gcd(sum,c);
    cout<<sum/l<<" "<<c/l; 
}