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
    int n,cnt=1;
    cin>>n;
    for(int i=2;i<=1e6;i++)
    {
     if( Prime(i))
      { 
           v.push_back(i);
      } 
    }
    for(int i=0;i<v.size();++i){
        if(cnt==n && Prime(i+1)){
            cout<<v[i]<<" ";
            break;
        } else if(Prime(i+1))
        {
             cnt++;
        }
       
    }
 
    return 0;
}