#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool com(pair<ll,ll> p1,pair<ll,ll> p2)
{
	return ((p1.first - p1.second) == (p2.first - p2.second)) ? p1.first<p2.first : (p1.first - p1.second)>(p2.first - p2.second);
}
int main() {

	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n,diff=0,a,b,sum=0;
	cin >> n;
	vector < pair < ll, ll >>v;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end(), com);
	diff = v[0].first - v[0].second;
	for (int i = 1; i < n; i++)
	{
		if (v[i].first >= diff)
		{
			sum += v[i].first - diff;
			diff = v[i].first - v[i].second;
		}
		else
		{
			diff = abs(v[i].first - diff) + v[i].first - v[i].second;
		}
	}
	cout << v[0].first+sum  << endl;
}
