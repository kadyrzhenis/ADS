#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,round,sum=0,sum1=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    cin>>round;
    int arr[round];
    for(int j=0;j<round;++j){
        cin>>arr[j];
    }
    for(int j=0;j<round;++j){
    for(int i=0;i<n;++i){
        if(arr[j]>=a[i]){
            sum++;
            sum1+=a[i];
        }}
         cout<<sum<<" "<<sum1<<endl;
         sum=0;
         sum1=0;
    }
    
    return 0;
}