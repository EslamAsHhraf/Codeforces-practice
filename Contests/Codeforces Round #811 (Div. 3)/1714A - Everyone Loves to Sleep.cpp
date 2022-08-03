#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
	ll n, m, k,a,b,ans=0,Min=LLONG_MAX;
	cin >>k>> n >> m ;
	ll tt = n * 60 + m;
	while (k--) {
		cin >> a >> b;
		ll yy = a * 60 + b;
		if (yy >= tt) {
			Min = min(yy-tt, Min);
		}
		else
		{
			Min = min(1440-(tt-yy), Min);
		}
	}
	cout << Min/60 <<" "<<Min- ((Min / 60)*60 )<< endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();
}