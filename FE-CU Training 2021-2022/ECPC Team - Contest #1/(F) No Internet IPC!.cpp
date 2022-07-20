#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() 
{
    ll n,k,d=1,ans=0;
    cin >> n >> k;
    n--;
    while (n > 0) {
        if (d > k) {
            n -= k;
            d += k;
        }
        else
        {
            n -= d;
            d += d;
        }
        ans++;
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