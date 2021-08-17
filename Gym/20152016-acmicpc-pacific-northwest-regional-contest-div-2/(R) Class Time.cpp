#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n;
	string s1, s2;
	cin >> n;
	map<string, multiset<string>>v;
	for (int i = 0; i < n; i++)
	{
		cin >> s1 >> s2;
		v[s2].insert(s1);
	}
	for (auto i : v)
	{
		for (auto z : i.second)
		{
			cout << z << " " << i.first << endl;
		}
	}
}
