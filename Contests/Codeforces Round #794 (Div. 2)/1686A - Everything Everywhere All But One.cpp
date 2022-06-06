#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	double sum = 0,n,a;
	cin >> n;
	set<double>myset;
	for (int i = 0; i < n; i++) {
		cin >> a;
		myset.insert(a);
		sum += a;
	}
	if (myset.count(sum / n))
		cout<<"YES" << endl;
	else
		cout << "NO" << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while(t--)
		solve();

}