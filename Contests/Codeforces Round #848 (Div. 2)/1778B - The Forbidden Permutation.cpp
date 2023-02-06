#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n,m,d,a,ans=LLONG_MAX;
    cin >> n >> m >> d;
    map<ll,ll>myMap;
    vector<ll>v(m);
    for (int i = 1; i <= n; i++) {
        cin >> a;
        myMap[a] = i;
    }
    cin >> v[0];
    bool flag = 0;
    for (int i = 1; i < m; i++) {
        cin >> v[i];
        
        ans = min(ans, max((ll)0, myMap[v[i]] - myMap[v[i - 1]]));
        ll l = myMap[v[i - 1]]-1;
        ll r = n-myMap[v[i]];
        if(l+r >= -1 * myMap[v[i]] + myMap[v[i - 1]] + d + 1)
            ans = min(ans, max((ll)0, -1 * myMap[v[i]] + myMap[v[i - 1]] + d+1));
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    cin >> t;
    while(t--)
        solve();


}