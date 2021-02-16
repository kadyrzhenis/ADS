#include <iostream>
using namespace std;
int sum(int x){
    if(x <= 9){
        return x;
    }
    return sum(x / 10) + x % 10;
}
int main()
{
    long long n,sum1=0, sum2 = 0;
    cin>>n;
    sum1 = sum(n);
    for(int i=2;i*i<=n;i++)
    { 
        if(n % i == 0){
            while(n % i == 0){
                n /= i;-
                sum2 += sum(i);
            }
        }
    
    }
    if(n > 1){
        sum2 += sum(n);
    }
    if(sum1==sum2)
    {
        cout<<true;
    }else
    {
    cout<<false;
    }
    return 0;
}