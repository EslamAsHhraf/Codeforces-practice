#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve() {
    ll n;
    cin >> n;
    vector<ll>v(n);
    for (int i = 0; i <n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            v[i]++;

    }
    for (int i = 1; i < n; i++) {
        if (v[i] % v[i - 1] == 0)
            v[i]++;
    }
    for (int i = 0; i < n; i++) {
        cout << v[i]<<" ";
    }
    cout << endl;
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