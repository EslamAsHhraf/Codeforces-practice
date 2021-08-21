#include <bits/stdc++.h>
using namespace std;
#define ll long long
inline ll read()
{
	ll x = 0, f = 1;
	char ch = getchar();
	while (ch<'0' || ch>'9')
	{
		if (ch == '-')
			f = -1;
		ch = getchar();
	}
	while (ch >= '0'&&ch <= '9')
	{
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * f;
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("bye.in", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t,n;
	cin >> t;
	while (t--)
	{
		ll temp;
		string s1, s2;
		vector<ll>v;
		bool l = 1;
		cin >> n >> s1 >> s2;
		for (int i = 0; i < n; i++)
		{
			if (s1[i] != s2[i])
			{
				if (v.empty())
					temp = i;
				v.push_back(i);
			}
		}
		if (v.size() == 1)
		{
			cout << "NO" << endl;
			continue;
		}
		v.push_back(temp);
		for (int i = 0; i < v.size()-1; i++)
		{
			if (s2[v[i]] != s1[v[i+1]])
			{
				l = 0;
				break;
			}
		}
		if(l)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
