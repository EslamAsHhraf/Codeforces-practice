#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
	long long n, x;
	cin >> n >> x;
	long long sn = n;
	while ((n & sn) != x) {
		n += n & -n;
		sn = n & sn;
		if ((n & sn) == 0) break;
	}
	if ((n & sn) != x) cout << -1 << '\n';
	else cout << n << '\n';
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    cin >> t;
    while(t--)
        solve();


}