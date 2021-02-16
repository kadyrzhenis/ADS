#include <iostream>
using namespace std;
int gcd(int x,int y){
    if(x%y==0) return y;
    return gcd(y,x%y);
}
int f(int a){
    if(a<=1) return a;
    return f(a-1)+f(a-2);
}
int main(){
   int a,b;
   cin>>a>>b;
   cout<<(f(a)*f(b))/gcd(f(a),f(b));

}