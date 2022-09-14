#include<bits/stdc++.h>
using namespace std;
#define ll  long long
ll n, k,ans=0;

void solve()
{
  
    cin >> n >> k;
    ans = n;
    vector<ll>v(n);
    vector<bool>vis(1000000005);
    map<double, ll>mymap;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mymap[v[i]]++;
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i++)
    {
        if (vis[v[i]])
            continue;
        if (mymap[1.0*v[i]/k]!=0)
        {
            ans--;
            vis[v[i]] = 1;
            vis[v[i] / k] = 1;
            if (k == 1)
            {
                ans++;
            }
        }
    }
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    ll t;
   /* cin >> t;*/
    /*while(t--)*/
        solve();

    

}