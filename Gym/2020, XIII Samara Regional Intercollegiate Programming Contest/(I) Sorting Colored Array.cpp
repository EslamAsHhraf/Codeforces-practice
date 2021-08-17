#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, a, c;
	cin >> n;
	map<ll, vector<ll>>myMap;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> c;
		myMap[c].push_back(a);
	}
	for (auto i : myMap)
	{
		if (!is_sorted(i.second.begin(), i.second.end()))
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
