#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("consistency_chapter_1_input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, m,a,ans=0;
		map<ll,ll> mymap;
		cin >> n >> m;
		for(int i=0;i<n;i++)
		{
			cin >> a;
			mymap[a%m]++;
		}
		for (auto i :mymap)
		{
			if (i.second == 0)
				continue;
			if (i.first == 0)
				ans++;
			else if (abs(i.second - mymap[m - i.first]) <= 1)
				ans++;
			else
				ans += abs(i.second - mymap[m - i.first]);
			mymap[m - i.first] = 0;
		}
		cout << ans << endl;
	}
}
