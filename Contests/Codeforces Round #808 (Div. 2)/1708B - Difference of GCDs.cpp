#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long

void solve() 
{
    ll n, l, r;
    cin >> n>>l>>r;
     vector<ll>v(n);
     for (ll i = 1; i <= n; i++) {
         if (l%i==0)
         {
             v[i - 1] = l;  
         }
         else
         {
             ll t = l / i;
             if ((t + 1) * i > r)
             {
                 cout << "NO" << endl;
                 return;
             }
             v[i - 1] = (t + 1) * i;
         }
     }
     cout << "YES" << endl;
     for (int i = 0; i < n; i++) {
         cout << v[i] << " ";
     }
     cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
    ll t;
    cin >> t;
    while (t--)
        solve();
}