#include <iostream>

using namespace std;

string anti_get_hash(int n) {
    int h = n;
    int p = 2;
    int p_pow = 1;
    string s="";
    for (int i = 0; i < n; i++) {
        s+=(h/p_pow)+97;
        p_pow *= p;
    }
    return s;
}

int main() {
    int n;
    cin>>n;
    int a;
    vector<int> v;
    int arr[n+1];
  for(int i=0;i<n;++i){
    push_back(v);
     cout << anti_get_hash(v) << " ";}
   
    return 0;
}