#include <iostream>
#include <cmath>
using namespace std;
int main(){
     long long n,sum=0;
    cin>>n;
    for(int i=2;i*i<=n;i++){ 
        if(n % i == 0){
            sum++;
            while(n % i == 0){
                n /= i;
            }
        }
    
    }if(n>1) sum++;
 cout<<sum;
    return 0;
}