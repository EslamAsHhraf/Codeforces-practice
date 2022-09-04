#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll m, tc, num, t = 1;

    cin>>num;

    vector<ll> arr(num), pre(num + 1);
    for (ll i = 0; i < num; ++i) {
        cin>>arr[i];
    }

    string str;
    cin >> str;
    for (ll i = 0; i < num; ++i) {
        pre[i + 1] = pre[i] + arr[i];
    }

    ll ans = 0, presum = 0;
    for (ll i = num - 1; i >= 0; i--) {
        if (str[i] == '1') {
            ans = max(ans, presum + pre[i]);
            presum += arr[i];
        }
    }

    ans = max(ans, presum);
    cout<<ans;

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