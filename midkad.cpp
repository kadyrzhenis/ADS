#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int sizze(int l,int r){
	int max = v[l], cnt = 1;
	while(l < r){
		if(v[++l] > max){
			cnt++;
			max = v[l];
		}
	}
	return cnt;
}

int main(int argc, char const *argv[])
{
	int n, q;
	vector<int> ans;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int w;
		cin>>w;
		v.push_back(w);
	}
	cin>>q;
	for (int i = 0; i < q; ++i)
	{
		int l,r;
		cin>>l>>r;
		ans.push_back(sizze(l,r));
	}
	for (int i = 0; i < ans.size(); ++i)
	{
		cout<<ans[i]<<endl;
	}
	return 0;
}