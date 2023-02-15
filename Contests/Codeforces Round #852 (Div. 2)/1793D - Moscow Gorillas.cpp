#include<bits/stdc++.h>
using namespace std;
#define ll  long long
ll cnt(ll len) {
    return len * (len - 1) / 2 + len;
}
void solve()
{
    ll n, res = 1; cin >> n;
    vector<ll> p(n + 1), q(n + 1), posp(n + 1), posq(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
        posp[p[i]] = i;
    }
    for (int i = 1; i <= n; ++i) {
        cin >> q[i];
        posq[q[i]] = i;
    }
    ll l = min(posp[1], posq[1]), r = max(posp[1], posq[1]);
    res += cnt(l - 1) + cnt(n - r) + cnt(r - l - 1);
    for (int val = 2; val <= n; ++val) {
        if ((l <= posp[val] && posp[val] <= r) || (l <= posq[val] && posq[val] <= r)) {
            l = min({ l, posp[val], posq[val] });
            r = max({ r, posp[val], posq[val] });
            continue;
        }
        ll lg = 0, rg = n + 1;
        if (posp[val] < l) lg = posp[val];
        else rg = posp[val];
        if (posq[val] < l) lg = max(lg, posq[val]);
        else rg = min(rg, posq[val]);
        res += (rg - r) * (l - lg);
        l = min({ l, posp[val], posq[val] });
        r = max({ r, posp[val], posq[val] });
    }
    cout << res << '\n';


}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    //cin >> t;
    //while (t--)
        solve();


}