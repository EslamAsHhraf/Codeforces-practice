#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	int n;
	cin >> n;
	vector<ll>v(n);
	ll Max=0,t, count=0;
	for (int i = 0; i < n; i++) {
		cin >> t;
		if (Max > t)
		{
			count++;
			Max = 0;
		}
		else
			Max = max(Max, t);
	}
	cout << count << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while(t--)
		solve();

}