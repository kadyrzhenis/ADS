#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int  main (){
    vector<int> v;
    int a,b,c;
    cin>>a>>b;
    c=a;
    while(a>0){
        cout<<a<<" ";
    if(a%2==0){
        a=a/2;
    }else if(a%2==1){
        a=a-1;
    }
    while(c>0){
     c--;
     a=c;
    }
       
    }
    return 0;
}