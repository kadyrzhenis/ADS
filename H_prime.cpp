#include <iostream>
using namespace std;
bool Prime(long long a)
{  if(a==1) return false;
   bool res=true;
    for(long long i=2;i*i<=a;++i)
    { if(a%i==0) {
      return false;
      break;}
    }
 return res;
}
int main()
{
  long long n;
  cin>>n;
  if(Prime(n)==true)
  {
      cout<<"prime";
  }
  else
  {
      cout<<"composite";
  }
  return 0;
}
