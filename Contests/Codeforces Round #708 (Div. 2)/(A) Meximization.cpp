#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
//	freopen("consistency_chapter_1_input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);
	ll t;
	cin >> t;
	while(t--)
	{
		ll n,a;
		set<ll>s;
		cin >> n;
		map<ll, ll>mymap;
		while (n--)
		{
			cin >> a;
			if (s.count(a) == 0)
				s.insert(a);
			else
				mymap[a]++;
		}
		for (auto i : s)
			cout << i << " ";
		for (auto i : mymap)
			for(int z=0;z<i.second;z++)
				cout << i.first << " ";
		cout << endl;
	}
}
