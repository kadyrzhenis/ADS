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
    string s,s1, t;
    int n,cnt=0;
    cin>>n;
    vector<string> str;
    while(n--){
    cin >> s;
    str.push_back(s);
    }
    cin>>s1;
    for(int i=0;i<str.size();++i){
    string s2 = str[i] + "#" +s1;
    vector<int> p = prefix_func(s2);
    for (int j = 0; j < s2.size(); j++) {
        if (p[j] == str[i].size())
            cnt++;
    }
    if(cnt>1){
    cout<<cnt<<endl;
     cout<<str[i]<<endl;}
     cnt=0;
  }
    return 0;
}