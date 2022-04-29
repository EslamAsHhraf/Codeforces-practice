#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,x;
	cin >> n;
	vector<ll>v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	if ( (v[1] +v[0])-(v[n-1]-v[0])>1 )
	{
		cout << "YES" << endl;
		cout << (v[n - 1] - v[0]) +1 << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	//cin >> t;
	//while(t--)
		solve();

}