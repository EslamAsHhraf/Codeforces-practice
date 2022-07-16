#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long

void solve() {
    ll n, ans=0;
    cin >> n ;
    bool falg = 0;
    vector<ll>v(n);
    for (int i = 0; i <n-1; i++) {
        cin >> v[i];
        if (v[i] > 0) {
            ans += v[i];
                falg = 1;
        }
        if (falg && v[i] == 0)
            ans++;
    }
    cin >> v[n - 1];
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
	ll t;
    cin >> t;
    while (t--)
        solve();
}