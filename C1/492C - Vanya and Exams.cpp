#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long

void solve() {
    ll r, n,avg,a,b, count=0, ans =0;
    cin >> n>>r >> avg;
    vector<pair<ll, ll>>v;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({ b,a });
        count += a;
    }
    ll target = n * avg - count;
    sort(v.begin(), v.end());
    int i = 0;
    while (target>0) {
        if (r - v[i].second >= 0) {
            ans += v[i].first * min(target, (r - v[i].second));
            target -= r - v[i].second;
        }
        i++;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
   // ll t;
    //cin >> t;
    //while (t--)
        solve();
}