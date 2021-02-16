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
    string s,st, t;
    int sum=0;
    vector<int> v,v1;
    cin >> s>> st >> t;
    string s1 = t + "#" +s;
    string s2 = t + "#" +st;
    vector<int> p = prefix_func(s1);
    for (int i = 0; i < s1.size(); i++) {
        if (p[i] == t.size())
            v.push_back(i - t.size() - t.size());
    }
    vector<int> p1 = prefix_func(s2);
    for (int j = 0; j < s2.size(); j++) {
        if (p1[j] == t.size())
            v1.push_back(j - t.size() - t.size());
           // cout<<i - t.size() - t.size()<<" ";
    } 
    for(int j=0;j<v1.size();++j){//v1=s2   v=s1
    for(int i=0;i<v.size();++i){
        if(v1[j]==v[i]){
            sum++;
        }}
    }
    cout<<sum;
    return 0;
}