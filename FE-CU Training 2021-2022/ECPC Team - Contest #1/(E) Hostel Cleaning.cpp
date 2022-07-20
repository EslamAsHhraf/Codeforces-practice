#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() 
{
    ll n,k,ans=LLONG_MAX;
    cin >> n>>k ;
    vector<ll>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i <k ; i++) {
        ll sum = 0;
        sum += v[i];
        int j = (i+k)%n;
       while(i!=j) {
           sum += v[j];
           j = ((j)+k) % n;
        }
       ans = min(ans, sum);
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
	 ll t;
  /*  cin >> t;
    while (t--)*/
        solve();
}