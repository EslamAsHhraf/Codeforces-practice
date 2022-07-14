#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long

void solve() {
    string s;
    cin >> s;
    ll ans = 1;
    set<char>mySet;
    for (int i = 0; i < s.size(); i++) {
        if (!mySet.count(s[i])) {
            if (mySet.size() == 3)
            {
                ans++;
                mySet.clear();
                mySet.insert(s[i]);
            }
            else
                mySet.insert(s[i]);
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
	ll t;
    cin >> t;
    while (t--)
        solve();
}