#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() 
{
	ll n,ans=0,tt=1; 
	cin >> n;
    while (n > 0) {
        n -= tt;
        if (n >= 0)
            ans++;
        tt++;
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