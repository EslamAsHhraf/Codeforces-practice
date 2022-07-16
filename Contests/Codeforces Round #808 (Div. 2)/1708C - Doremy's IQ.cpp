#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long
void solve() 
{
    ll n, q;
    cin >> n>>q;
    vector<ll>v(n);
     vector<ll>ans(n);
     for (int i = 0; i < n; i++) {
         cin >> v[i];
     }
     ll s = 0;
     for (int i = n - 1; i >= 0; i--)
     {
         if ( v[i]<=s)
            ans[i] = 1;
         else {
             if (q > s) {
                 ans[i] = 1;
                 s++;
             }
         }
     }
     for (int i = 0; i < n; i++) {
         cout << ans[i];
     }
     cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
    ll t;
    cin >> t;
    while (t--)
        solve();
}