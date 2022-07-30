#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct pp {
    ll s;
    ll p;
    string d;
};
bool com(pp a, pp b) {
    return (a.s == b.s) ? a.p<b.p : a.s>b.s;
}

void solve() 
{
    ll n,a,Max=LLONG_MIN;
    cin >> n;
    vector<ll>v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
        Max = max(Max, v[i]);
    }
    ll temp = 100 - Max,ans=0;
    for (int i = 0; i < n; i++) {
        if (v[i] + temp >= 50)
            ans++;
    }
    cout << ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
    ll t;
   cin >> t;
   while (t--)
        solve();
}