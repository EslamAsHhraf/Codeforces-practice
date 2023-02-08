#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n, ans = 0, count = 0;
    cin >> n;
    vector<ll>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < 0)
            count++;

        v[i] = abs(v[i]);
        ans += v[i];
    }
    count -= (count / 2) * 2;
    sort(v.begin(), v.end());
  
    for (int i = 0; i < count; i++)
            ans -= 2 * v[i];
    
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