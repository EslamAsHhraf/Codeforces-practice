#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
vector < map < ll,pair<ll, pair<bool,ll>> >> db(2000+5);
vector<ll>v(2000+5, -1);
ll n,Max=0;
ll check(ll z=0,ll i=0,ll count=0) {
	if (i == n) {
		return count;
	}
	if (db[i][z].second.first)
	{
		if(count<= db[i][z].second.second)
			return db[i][z].first;
		else {
			ll temp = db[i][z].second.second;
			db[i][z].second.second = count;
			return db[i][z].first=db[i][z].first- temp +count;
		}
	}
	db[i][z].second.first = 1;
	db[i][z].second.second = count;
	if (v[i] >= 0)
	{
		return db[i][z].first = check(z + v[i], i + 1, count + 1);
	}
	else if (z + v[i] >= 0)
	{
		return db[i][z].first =max(check(z + v[i], i + 1, count + 1),check(z, i + 1, count));
	}
	else
	{
		return db[i][z].first = check(z, i + 1, count);
	}
}
void solve()
{
	 cin >> n;
	priority_queue<ll, vector<ll>, greater<ll>>pq;
	ll s = 0, ans = 0;
	ll k;
	for (int i = 0; i < n; i++) {
		cin >> k;
		pq.push(k);
		s += k;
		ans++;
		while (s < 0) {
			s -= pq.top();
			pq.pop();
			ans--;
		}
	}
	cout << ans;
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	//ll t;
	//cin >> t;
	//while (t--)
		solve();
 
}