#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
    ll n,tt;
    cin >> n; 
    if (n == 1 || n == 2) {
        cout << -1;
        return;
    }
    double ans1 = (pow(n, 2) - 1) / 2;
    tt = ans1;
    if (ans1 == tt)
    {
        cout << tt + 1 << " " << tt;
        return;
    }
    ans1 = (pow(n, 2) - 4) / 4;
    tt = ans1;
    if (ans1 == tt)
    {
        cout << tt + 2 << " " << tt;
        return;
    }
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   /* freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
   /* ll t;
	cin >> t;
    while (t--)*/
        solve();
}