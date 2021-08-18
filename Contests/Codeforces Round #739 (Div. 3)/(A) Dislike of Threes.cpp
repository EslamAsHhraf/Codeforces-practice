#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
void init()
{
	for (int i = 0; i <= 1666; i++)
	{
		if (i % 3 != 0 && (i % 10) != 3)
		{
			v.push_back(i);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t, k;
	cin >> t;
	init();
	while (t--)
	{
		cin >> k;
		cout << v[k - 1] << endl;
	}

}
