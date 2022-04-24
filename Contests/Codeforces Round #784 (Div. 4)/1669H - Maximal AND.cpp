#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
void solve()
{
    ll  x, p, sum = 0;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 30; i >= 0; i--) {
        p = 0;
        x = pow(2, i);
        for (ll j = 0; j < n; j++) {
            if ((a[j] & x) == 0) {
                p++;
            }
        }
        if (p <= k) {
            k -= p;
            sum = sum + x;
        }
    }
    cout << sum << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
		solve();
	
}