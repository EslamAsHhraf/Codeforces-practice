#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n, m, q,temp, u, v;
	set<ll>Set;
	cin >> n >> m;
	vector<ll>ve(n + 1);
	while (m-->0)
	{
		cin >> u >> v;
		temp = min(u, v);
		Set.insert(temp);
		ve[temp]++;
	}
	cin >> q;
	while (q-- > 0)
	{
		ll t;
		cin >> t;
		if (t == 3)
		{
			cout << n-Set.size() << endl;
		}
		else if(t==2)
		{
			cin >> u >> v;
			temp = min(u, v);
			ve[temp]--;
			if(ve[temp]==0)
				Set.erase(temp);
		}
		else if (t == 1)
		{
			cin >> u >> v;
			temp = min(u, v);
			Set.insert(temp);
			ve[temp]++;
		}
	}
}