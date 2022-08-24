#include<bits/stdc++.h>
using namespace std;
#define ll  long long
ll n, m, ans = 0;
ll power(int num, int deg)
{
    if (!deg)
    {
        return 1;
    }
    if (deg % 2)
    {
        return (power(num, deg - 1) * num) % m;
    }
    else
    {
        ll sqrt_res = power(num, deg / 2);
        return ((sqrt_res%m) * sqrt_res) % m;
    }
}
void solve()
{
    cin >> n >> m;
    ll res = power(3, n);
    res--;
    if (res < 0) 
        res += m;
    cout << res;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
 /*   ll t;
	cin >> t;
	while (t--)*/
     solve();

}