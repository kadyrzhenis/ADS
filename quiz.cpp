#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
	stack<char> s;
	string st;
	cin>>st;
	s.push(st[0]);
	for (int i = 1; i < st.size(); ++i)
	{
		if(s.empty()){
			s.push(st[i]);
			continue;
		}
		if(st[i]==s.top()){
			s.pop();
		}else{
			s.push(st[i]);
		}
	}
	if(s.empty()){
		cout<<"YES";
	} else{
		cout<<"NO";
	}
	return 0;
}