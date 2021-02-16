#include <iostream>

using namespace std;

int get_hash(string  s) {
    int h = 0;
    int p = 2;
    int p_pow = 1;
  for(int i=0;i<s.size();++i){

        h+=(s[i]-97)*p_pow;
        p_pow *= p;}
    return h;
}

int main() {
    string s1, s2,s3,s4,s5;
    cin >> s1 >> s2>>s3>>s4>>s5;
    cout << get_hash(s1) << " " << get_hash(s2) << " " << get_hash(s3) << " " << get_hash(s4) << " "<< get_hash(s5) ;
    return 0;
}