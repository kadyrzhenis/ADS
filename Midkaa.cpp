#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;

int min(int l,int r){
	int cnt = 0;
	vector<int> ar;
	for (int i = 0; i < r - l + 1; ++i)
	{
		ar.push_back(arr[l + i]);
	}
	int i = 0;
	while(!ar.empty()){
		if (ar.size()==1)
		{
			cnt++;
			break;
		}
		if (ar[i] < ar[i + 1])
		{
			ar.erase(ar.begin() + i);
			continue;
		}
		if(ar[i] > ar[i + 1]){
			cnt++;
			ar.erase(ar.begin() + i);
		}
	}
	return cnt;
}

int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	int  ans[b];
	for (int i = 0; i < a; ++i)
	{
		int q;
		cin>>q;
		arr.push_back(q);
	}
	for (int i = 0; i < b; ++i)
	{
		int q,w;
		cin>>q>>w;
		ans[i] = min(q-1,w-1);
	}
	for (int i = 0; i < b; ++i)
	{
		cout<<ans[i]<<endl;
	}
	return 0;
}