#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("consistency_chapter_1_input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll ans = 0,repeat=0,n,x,y;
	map<ll, ll>myMap1, myMap2;
	map< pair<ll, ll>, ll > myMap;
	cin >> n;
	while(n--)
	{
		cin >> x >> y;
		ans += myMap1[x]++;
		ans += myMap2[y]++;
		ans -= myMap[make_pair(x, y)]++;
	}
	cout << ans;
}
