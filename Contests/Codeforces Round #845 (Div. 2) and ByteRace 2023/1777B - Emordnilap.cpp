#include<bits/stdc++.h>
using namespace std;
#define ll  long long
ll arr[1000005];
ll mod = 1000000007;

void fact() {
    arr[0] = 1;
    for (int i = 1; i <= 1000004; i++) {
        arr[i] = (i * arr[i - 1])%mod;
    }

}
void solve()
{
    ll n;
    cin >> n;
    ll ans = (n * arr[n]) % mod;
    ans = (ans * (n - 1)) % mod;
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    cin >> t;
    fact();
    while(t--)
        solve();


}