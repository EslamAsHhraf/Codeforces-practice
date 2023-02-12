#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int x, y;
void f(int n) {
    if (n >= 10) f(n / 10);
    x *= 10;
    y *= 10;
    x += n % 10 / 2;
    y += (n % 10 + 1) / 2;
    if (n & 1) swap(x, y);
}
void solve()
{
	ll n;
	cin >> n;
    x = y = 0;
    f(n);
    cout << x << ' ' << y << '\n';
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    cin >> t;
    while (t--)
        solve();


}