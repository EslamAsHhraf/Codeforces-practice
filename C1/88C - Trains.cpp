#include<bits/stdc++.h>
using namespace std;
#define ll  long long

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    ll m = lcm(a, b);

    ll x = m / a - 1, y = m / b - 1;

    if (x < y) 
        x++;
    else
        y++;

    if (x == y)
        cout << "Equal";
    else if (x > y)
        cout << "Dasha";
    else
        cout << "Masha";

}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
//    ll t;
//	cin >> t;
//	while (t--)
    solve();

}