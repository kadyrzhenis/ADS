#include <vector>
#include<iostream>
using namespace std;
vector<int> pref(string s) {
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
}vector<int> prefx(string s) {
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
int main(){
string s,t;
    cin >> s >> t;

    string curs = s+"#"+t;
    vector<int> p = prefx(curs);
    vector<int> pref(size(p)+1);
    for(int i = 0; i < size(p); i++){
        if(p[i] == size(s) && p[i-size(s)] == p[i]){
            pref[i] = pref[i-size(s)] + 1;
        }
    }
    int maxx = 0;
    for(int i = 0; i < size(pref); i++){
        if(pref[i] > maxx)
        maxx = pref[i];
    }
    cout << maxx+1 << endl;
}
