#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, num = 0;;
	string e;
	map<char, ll>s;
	vector< ll>v;
	cin >> e;
	for (int i = 0; i < e.size(); i++)
	{
		s[e[i]]++;
	}
	if (s.size() <= 2)
	{
		cout << 0;
		return 0;
	}
	for (auto i : s)
	{
		v.push_back(i.second);
	}
	sort(v.begin(), v.end());
	num = accumulate(v.begin(), v.end() - 2, 0);
	cout << num;
}

