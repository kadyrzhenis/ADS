#include <iostream>
#include <Math.h>
using namespace std;
int main()
{
    int a,b,c,d,n;
    cin>>n;
    a=n-(int)sqrt(n)*(int)sqrt(n);
    b=a-(int)sqrt(a)*(int)sqrt(a);
    c=b-(int)sqrt(b)*(int)sqrt(b);
    d=c-(int)sqrt(c)*(int)sqrt(c);
    cout<<(int)sqrt(n)<<" "<<(int)sqrt(a)<<" "<<(int)sqrt(b)<<" "<<(int)sqrt(c);

    return 0;
}