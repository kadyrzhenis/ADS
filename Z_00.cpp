#include <iostream>
#include <vector>

using namespace std;

vector<int> get_hash(string s) {
    int n = s.size();
    vector<int> h(n);
    int p = 31;
    int p_pow = 1;
    h[0] = s[0];
    for (int i = 1; i < n; i++) {
        p_pow *= p;
        h[i] = h[i - 1] + s[i] * p_pow;
    }
    return h;
}

int main() {
    string s, t;
    int r,cnt=0,max=0;
    vector <string> ans;
    vector <string> v;
    while(cin>>r){
            v.clear();
            ans.clear();
            max=0;
    if(r==0)
        break;
    for(int k=0;k<r;k++){
    cin >> t;
    v.push_back(t);
    }
    cin >> s;
    for(int z=0;z<r;z++){
        cnt=0;
    int n = s.size();
    int m = v[z].size();
    int p[n];
    p[0] = 1;
    for (int i = 1; i < n; i++)
        p[i] = p[i - 1] * 31;
    int h_t = get_hash(v[z])[v[z].size() - 1];
    vector<int> h_s = get_hash(s);
    for (int i = 0; i < n - m + 1; i++) {
        int j = i + m - 1;
        int hash_i_j = h_s[j];
        if (i > 0)
            hash_i_j = hash_i_j - h_s[i - 1];
        if (hash_i_j == h_t * p[i]) {
            cnt++;
        }
    }
    if(max<cnt){
        max=cnt;
        ans.clear();
        ans.push_back(v[z]);
    }
    else if(max==cnt)
        ans.push_back(v[z]);
    }
    cout<<max<<endl;
    for(int u=0;u<ans.size();u++)
        cout<<ans[u]<<endl;
    }
    return 0;
}

