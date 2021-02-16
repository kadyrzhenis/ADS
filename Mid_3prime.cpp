#include <iostream>
#include <vector>
using namespace std;
bool Prime(int x)
{
    if(x==1) return false;
    bool res=true;
    for(int i=2;i*i<=x;++i)
    {
        if(x%i==0)
        {
         res=false;
         break;    
        }
    }
    return res;
}int main()
{   vector<int> v;
    int n,cnt=0;
    cin>>n;
    for(int i=2;i<=1000;i++)
    {
     if( Prime(i))
      { 
           v.push_back(i);
      } 
    }for(int i=1;i<=v.size();++i){
       cnt+=v[n];
} cout<<cnt;
    }