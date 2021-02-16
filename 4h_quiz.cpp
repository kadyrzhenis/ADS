#include <vector>
#include <iostream>

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
    int cnt=0;
    string s, t, d;
    cin >> s >> d >> t;
    int n = s.size();
    int m = t.size();
    int k = d.size();
    int p[n];
    int z[k];
    p[0] = 1;
    z[0]= 1;
    for (int i = 1; i < n; i++)
        p[i] = p[i - 1] * 31;
    for (int i = 1; i < k; i++)
        z[i] = z[i - 1] * 31;
    int h_t = get_hash(t)[t.size() - 1];
    vector<int> h_s = get_hash(s);
    vector<int> h_d=get_hash(d);
    for (int i = 0; i < n - m + 1; i++) {
        int j = i + m - 1;
        int hash_i_j = h_s[j];
        int hash_i2_j2 = h_d[j];
        if (i > 0){
            hash_i_j = hash_i_j - h_s[i - 1];
            hash_i2_j2 = hash_i2_j2 - h_d[i - 1];
        }
        if (hash_i_j == h_t * p[i] && hash_i2_j2 == h_t * z[i]) {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
