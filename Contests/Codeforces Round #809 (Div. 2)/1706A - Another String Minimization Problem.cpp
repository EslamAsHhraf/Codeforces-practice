#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() 
{
    ll n,m;
    cin >> n>>m;
    vector<ll>v(n);
    vector<char>g(m+1,'B');
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] <= m / 2) {
            if (g[v[i]] == 'B') {
                g[v[i]]='A';
            }
            else {
                g[m-v[i]+1] = 'A';
            }
        }
        else {
            if (g[m - v[i] + 1] == 'B') {
                g[m - v[i] + 1] = 'A';
            }
            else {
                g[v[i]] = 'A';
            }
        }
    }
    for (int i = 1; i <= m; i++) {
        cout<<g[i];
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