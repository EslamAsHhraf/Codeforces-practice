#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n, m, k,co=0;
	string a, b,ans,temp;
	cin >> n >> m >> k;
	cin >> a >> b;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	while (!(a.empty() || b.empty())) {
		if (a.empty())
		{
			ans.append(b);
			break;
		}
		if (b.empty())
		{
			ans.append(a);
			break;
		}
		if (co == k) {
			ans.push_back(b[0]);
			b.erase(0, 1);
			swap(a, b);
			co = 1;
			continue;
		}
		if (a[0] < b[0]) {
			ans.push_back(a[0]);
			a.erase(0, 1);
			co++;
		}
		else {
			ans.push_back(b[0]);
			b.erase(0, 1);
			swap(a, b);
			co = 1;
		}

	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while(t--)
		solve();

}