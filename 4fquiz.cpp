#include <iostream>
#include <algorithm>
#include <vector> 
#define hackzhenis() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define do(x) for(int i = 1; i <= x; i++){ solve(); }
using namespace std;
//using namespace __gnu_pbds;
void solve(){
	int n; cin >> n;
    int powers[50500];
    int prefix[50500];	
	for(int i = 0; i < n; i++)
		cin >> powers[i];
		
	sort(powers, powers + n);
	for(int i = 0; i < n; i++)
		prefix[i+1] = prefix[i] + powers[i];

	int q; cin >> q;
	for(int i = 0; i < q; i++){
		int l = 0, r = n-1;
		int m; cin >> m;
		while(r - l > 1){
			int mid = (r + l) / 2;
			if(powers[mid] > m)
				r = mid-1;
			else 
				l = mid;
		}
		if(powers[r] <= m){
			cout << r + 1 << " " << prefix[r+1] << endl;
		}else if(powers[l] <= m){
			cout << l + 1 << " " << prefix[l+1] << endl;
		}else{
			cout << 0 << " " << 0 << endl;
		}
	}
}



int main(){
	hackzhenis()
	int it = 1;
	do(it);
	return 0;
}