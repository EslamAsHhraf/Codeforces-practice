#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long

void solve() {
    ll n, k,a,b,u;
    cin >> n >> k;
    vector<ll>v(2*n+1);
    for (int i = 1; i <= 2*n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <=  n; i++) {
        if (v[i + n] - v[i] < k)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
	ll t;
    cin >> t;
    while (t--)
        solve();
}