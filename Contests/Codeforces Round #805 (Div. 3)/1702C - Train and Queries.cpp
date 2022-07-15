#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long

void solve() {
    ll n, k,a,b,u;
    cin >> n >> k;
    map<ll, vector<ll>> Mymap;
    for (int i = 0; i < n; i++) {
        cin >> u;
        Mymap[u].push_back(i+1);
    }
    while (k--) {
        ll a, b;
        cin >> a >> b;
        if (Mymap[a].empty() || Mymap[b].empty()) {
            cout << "NO"<<endl;
            continue;
        }
        if (Mymap[a].front() <= Mymap[b].back())
            cout << "YES";
        else
            cout << "NO";
        cout << endl;;
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
	ll t;
    cin >> t;
    while (t--)
        solve();
}