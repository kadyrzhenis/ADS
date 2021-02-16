#include <iostream>
#include <vector>

using namespace std;

vector<int> prefix_func(string s) {
    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = p[i - 1];
        while (j > 0 && s[j] != s[i]) 
            j = p[j - 1];
        if (s[j] == s[i])
            j++;
        p[i] = j;
    }
    return p;
}

int main() {
    string s, t;
    cin >> s >> t;
    int ss=s.size();
    int tt=t.size();
    if(ss>tt){
    string s1 = t + "#" +s;
    vector<int> p = prefix_func(s1);
    for (int i = 0; i < s1.size(); i++) {
        if (p[i] == t.size()){
    //cout<<"yes";
            cout <<s<< " ";
return 0;
        }
        
        
    }
    cout <<s+t<< " ";}
    if(ss<tt){
        string s1 = s + "#" +t;
    
    vector<int> p = prefix_func(s1);
    for (int i = 0; i < s1.size(); i++) {
        if (p[i] == t.size()){
    //cout<<"yes";
            cout <<t<< " ";
            return 0;
        }
        
    }
    cout <<s+t<< " ";}
       
    return 0;
}