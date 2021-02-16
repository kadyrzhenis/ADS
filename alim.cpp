#include <iostream>
using namespace std;
int main(){
    int m,max=-1e-17,min=10000;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
         if(a[i]>max){
           max=a[i];
       }   
       if(a[i]<=min){
           min=a[i];
        }
    }for(int i=0;i<m;i++){
      if(a[i]==max){
           a[i]=min;
       }
       cout<<a[i]<<" ";
    }
}