#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {

	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, num=1, aa;
	cin >> n;
	vector<ll>v;
	for (int i = 0; i < n; i++)
	{
		cin >> aa;
		if (aa == 1)
			v.push_back(i);
	}
	if (v.size() != 0)
	{
		for (int i = 0; i < (v.size() - 1); i++)
		{
			num *= v[i + 1] - v[i];
		}
		cout << num;
	}
	else
		cout << 0;
}
