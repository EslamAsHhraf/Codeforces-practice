#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, q,a;
	char c;
	vector<pair<char, ll>>v;
	cin >> n >> q;
	while(q--)
	{
		cin >> a >> c;
		v.push_back(make_pair(c, a));
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].first == 'M')
		{
			cout << "No";
			return 0;
		}
		else if ((i!=0) &&((v[i].second - v[i - 1].second) <= 3) && (v[i].first != v[i - 1].first))
		{
			cout << "No";
			return 0;
		}
	}
	cout<<"Yes";
}
