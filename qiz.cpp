#include <iostream>
#include <vector>
#include <cmath>
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
vector<int> prefix_func1(string s) {
    int n = s.size();
    vector<int> p1(n);
    p1[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = p1[i - 1];
        while (j > 0 && s[j] != s[i]) 
            j = p1[j - 1];
        if (s[j] == s[i])
            j++;
        p1[i] = j;
    }
    return p1;
}

int main() {
    string s1,s2, t;
    int cnt=0,cnt1=0;
    cin >> s1>>s2 >> t;
    string str1 = t + "#" +s1;
    string str2 =t+"#"+s2;
    vector<int> p = prefix_func(str1);
    vector<int> p1 = prefix_func1(str2);
    for (int i = 0; i < str1.size(); i++) {
        if (p[i] == t.size())
        //cout<<"yes";
        cout<<i;
         cnt++;}
   for (int i = 0; i < str2.size(); i++) {
        if (p1[i] == t.size())
        cout<<i;
         cnt1++;}
           cout<<min(cnt,cnt1);

    cout<<cnt<<" "<<cnt1;
        
    return 0;
}