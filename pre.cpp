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
    string pp="";
    cin >> s >> t;
    int tt=t.size();
    string s1 =t+s;
    vector<int> p = prefix_func(s1);
    for (int i = tt; i < s1.size(); i++) {
        if (p[i] == 0 )
        pp+=s1[i];
         
    }
        cout<<pp+t;

    return 0;
}