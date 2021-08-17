#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ll n, aa, Max = 0;
	vector<char>v{ 'A','B','C','D' };
	map<char, ll>m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> aa;
		m[v[i % 4]] += aa;
		Max = max(Max, m[v[i % 4]]);
	}
	for (auto i : m)
	{
		if (i.second == Max)
		{
			cout << i.first;
			return 0;
		}
	}
}
