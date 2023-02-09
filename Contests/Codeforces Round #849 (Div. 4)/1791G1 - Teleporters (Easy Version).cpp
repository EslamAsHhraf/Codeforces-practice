#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n,c,a,ans=0;
    cin >> n >> c;
    vector<ll>v(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a;
        v[i] = a + i;
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++) {
        if (c >= v[i]) {
            ans++;
            c -= v[i];
        }
        else
            break;
    }
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    cin >> t;
    while (t--)
        solve();


}