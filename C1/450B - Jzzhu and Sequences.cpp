#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll x, y, n,m = 1e9 + 7;
    vector<ll>v(6);
    cin >> v[0] >> v[1] >> n;
    v[2] = v[1] - v[0];
    for (int i = 0; i < 3; i++)
        v[i + 3] = v[i] * -1;
 /*   cout << ((v[(n - 1) % 6])>= 0 ? (v[(n - 1) % 6] % 1000000007):(1000000007+ v[(n - 1) % 6]));*/
    cout<< (v[(n - 1) % 6] % m+ m)% m;
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