#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
	ll n, a,ans=-1,count=0;
	cin >> n;
	vector<ll>v(2 * n);
	for (int i = 0; i < 2*n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
		
		for (int i = 0; i < n; i++) {
			cout << v[i]<<" "<<v[2*n-i-1]<<" ";
		}
		cout << endl;
			
		
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();
 
}