#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() 
{
    ll n,m,a,b;
    cin >> n >> m;
    vector<ll>v(n+2, LLONG_MAX);
    vector<ll>ans(n+2);
    vector<ll>ans2(n+2);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0;
    for (int i = n; i >= 1; i--)
    {
        ans[i] = sum += (v[i + 1] < v[i]) ? v[i] - v[i + 1] : 0;

    }
    sum = 0;
    for (int i = 1; i <=n; i++)
    {
        ans2[i]=sum += (v[i -1] < v[i]) ? v[i] - v[i-1] : 0;

    }
    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b;
        cout <<( (a<b)?(ans[a]-ans[b]): (ans2[a] - ans2[b]) )<< endl;
    }
    
  
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
   /* ll t;
   cin >> t;
   while (t--)*/
        solve();
}