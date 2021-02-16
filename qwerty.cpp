#include <iostream>
using namespace std;
int main(){
    int n,cnt=0,x=INT_MAX,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }for(int i=n-1;i>=0;i--){
     if(a[i]>=x)
        cnt++;
       x=min(x,a[i]);
      
    }

cout<<n-cnt;
    
}