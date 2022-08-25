#include<bits/stdc++.h>
using namespace std;
#define ll  long long
ll ans = 0,n,m;
vector<ll>v;
vector<bool>vis;
vector<vector<ll>> arr;
void dfs(ll d, ll sum=0) {
    if (vis[d])
        return;
    vis[d] = 1;
    if (v[d]) {
        sum++;
    }
    else
        sum=0;
    if(sum>m)
        return;
    ll tt = 0;
    for (int i = 0; i < arr[d].size(); i++) {
        if (!vis[arr[d][i]])
            dfs(arr[d][i], sum);
        else
            tt++;
    }
    if (arr[d].size() ==tt)
    {
        ans++;
    }
}
void solve()
{
    cin >> n>>m;
    arr.resize(n+1);
    v.resize(n+1);
    vis.resize(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <n; i++) {
        ll x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    dfs(1);
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
 /*   ll t;
	cin >> t;
	while (t--)*/
     solve();

}