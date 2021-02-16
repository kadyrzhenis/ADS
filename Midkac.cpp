#include <iostream>
#include <vector>

using namespace std;

vector<vector<string> > ans;
string pivot;

void merge(int l,int m,int r){
	int n1 = m - l + 1, n2 = r - m, p1 = 0, p2 = 0, k = l;
	vector<vector<string> > ar1, ar2;
	for (int i = 0; i < n1; ++i)
	{
		ar1.push_back(ans[l + i]);
	}
	for (int i = 0; i < n2; ++i)
	{
		ar2.push_back(ans[m + i + 1]);
	}
	while(p1 < n1 && p2 < n2){
		if (ar1[p1] <= ar2[p2])
		{
			ans[k] = ar1[p1];
			 p1++;
		} else{
			ans[k] = ar2[p2];
			p2++;
		}
		k++;
	}
	while(p1 < n1){
		ans[k] = ar1[p1];
		p1++;
		k++;
	}
	while(p2 < n2){
		ans[k] = ar2[p2];
		p2++;
		k++;
	}
}

void sortt(int l,int r){
	if(l < r){
		int m = (l + r)/2;
		sortt(l, m);
		sortt(m+1, r);
		merge(l, m, r);
	}
}
void func(int q, int l, int r){
	int i = l, j = r;
	pivot = ans[q][(r+l)/2];
	while(i < j){
		while((ans[q][i]).size() < (pivot).size())
			i++;
		while((ans[q][j]).size() > (pivot).size())
			j--;
		if (i <= j)
		{
			swap(ans[q][i], ans[q][j]);
			i++;
			j--;
		}		
	}
	if(l < j)
		func(q, l, j);
	if(i < r)
		func(q, i, r);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		string s;
		vector<string> v;
		while(cin>>s)
		{
			if (s=="stop")
			{
				break;
			}
	    	v.push_back(s);
		}
		ans.push_back(v);
		func(i, 0, v.size()-1);
		/*for (int j = 0; j < ans[i].size(); ++j)
		{
			for (int k = 1; k < ans[i].size(); ++k)
			{
				if (ans[i][j].size() > ans[i][k].size())
				{
					swap(ans[i][j], ans[i][k]);
				}
			}
		}*/
	}
	for (int i = 0; i < ans.size(); ++i)
	{
		for (int j = 0; j < ans[i].size(); ++j)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	cin>>n;
	return 0;
}