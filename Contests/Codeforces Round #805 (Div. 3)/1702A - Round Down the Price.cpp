#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long

void solve() {
    ll m;
    cin >> m;
    if (m < 10) {
        cout << m-1 << endl;
        return;
    }
    ll i = 10;
    for (; i <= m;i*=10) {
    }
    i /= 10;
    cout << m-i<<endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
	ll t;
    cin >> t;
    while (t--)
        solve();
}