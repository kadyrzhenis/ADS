#include <iostream>
#include <deque>
using namespace std;
 
 
int main(){
deque<string> d;  
string s;
    cin >> s;
    while(s!="exit"){
        if( s == "insert"){
            string b; cin >> b;
            d.push_front(b);
        
        }
        if(s=="cnt"){
            string b; cin >> b;
            d.push_back(b);
        }
        if(s=="delete"){
            int n;
            cin>>n;
            for(int i=0;i<=100000000;++i){
            cout <<i;   
            }
        }
    }
    cout << "goodbye\n";
    return 0;
}
