#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long

void solve() {
    ll n,c=0;
    cin >> n;
    vector<ll>v(n), temp;
    cin >> v[0];
    for (int i = 1; i < n; i++) {
        cin >> v[i];
        if (v[i] % v[0] != 0)
            c = 1;
    }
     if (c==0)
         cout << "YES" << endl;
     else
         cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
    ll t;
    cin >> t;
    while (t--)
        solve();
}