#include <iostream>
using namespace std;
int main(){
    int a,n,cnt=0;
    cin>>a>>n;
    int arr[50500][50500];
    for(int i=0;i<2;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }for(int i=0;i<2;++i){
        for(int j=0;j<n;++j){
            if(arr[i][j]==arr[j][i])
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}