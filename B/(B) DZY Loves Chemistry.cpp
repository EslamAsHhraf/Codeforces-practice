#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<ll, set<ll>>myMap;
set<ll>v;
ll n, m, num = 1, aa, bb;
ll calc(int x)
{
	ll sum = 1;
	if (v.count(x) == 0)
	{
		v.insert(x);
		for (auto i : myMap[x])
		{
			if (v.count(i) == 0)
			{
				sum *= 2;
				sum *= calc(i);
			}
		}
	}
	return sum;
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	cin >> n>>m;
	for (int i = 0; i < m; i++)
	{
		cin >> aa >> bb;
		myMap[aa].insert(bb);
		myMap[bb].insert(aa);
	}
	for (int i = 1; i < n; i++)
	{
		num *= calc(i);
	}
	cout << num;
}
