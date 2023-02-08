#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n;
    string A;
    cin >> n >> A;
    ll ans = n;
    for (int i = 0; i < n / 2; i++) {
        if (A[i] != A[n - i - 1])
            ans -= 2;
        else
            break;
    }
   
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    cin >> t;
    while(t--)
        solve();


}