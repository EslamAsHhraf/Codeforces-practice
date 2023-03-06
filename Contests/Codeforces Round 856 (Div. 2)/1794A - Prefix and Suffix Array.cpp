#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve() {
    ll n;
    cin >> n;
    string s;
    vector<string>v;
    for (int i = 0; i < 2 * n - 2; i++)
    {
        cin >> s;
        if (s.length() == ceil(n/2.0))
            v.push_back(s);
    }
    reverse(v[1].begin(), v[1].end());
    if (v[0] == v[1]) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
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