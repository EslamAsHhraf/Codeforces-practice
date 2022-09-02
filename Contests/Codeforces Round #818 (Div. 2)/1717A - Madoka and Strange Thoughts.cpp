#include<bits/stdc++.h>
using namespace std;
#define ll  long long
long long gcd(long long int a,
    long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
void solve()
{
    ll n;
    cin >> n;
    ll ans = 2 * (n / 2)+ 2 * (n / 3)+n;

    cout << ans <<endl;
 

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