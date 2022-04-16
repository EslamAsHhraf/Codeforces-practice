#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll r=0,l=0,ans;
ll sum[(ll)1e6+9];
vector<pair<ll, ll>>v;
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n,d, Max = 0;
	cin >> n>>d;
	v.resize(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i].first >> v[i].second;	
	}
	sort(v.begin(), v.end());
	memset(sum, 0, sizeof(sum));
	for (int l = 0, r = 0; r < n;)
	{
		if (abs(v[l].first - v[r].first) < d)
		{
			ans += v[r].second;
			r++;
		}
		else 
		{
			Max = max(ans, Max);
			ans -= v[l].second;
			l++;
		}
		Max = max(ans, Max);
	}
	cout << Max;

}