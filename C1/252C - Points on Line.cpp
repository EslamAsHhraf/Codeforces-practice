#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
    ll n, d,a;
    unsigned long long ans = 0;
    cin >> n >> d;
    vector<ll>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1 || n == 2) {
        cout << 0;
        return;
    }
    for (auto i = v.begin(); i!= v.end()-2; i++) {
        auto ti=lower_bound(v.begin(),v.end(),*i + d);
        if (ti == v.end()|| *ti>(*i+d))
            ti--;
        if (ti - i >= 2) {
            unsigned long long tt = (ti - i);
            ans += tt*(tt-1) /2;
        }
     }
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  /*  freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
   /* ll t;
    cin >> t;
    while (t--)*/
        solve();

}