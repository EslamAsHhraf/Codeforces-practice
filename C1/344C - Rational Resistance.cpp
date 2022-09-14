#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll a, b, ans = 0;
    cin >> a >> b;

    while (a)
    {
        ans += b / a, b = b % a;
        swap(a, b);
    }
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    ll t;
   /* cin >> t;*/
    /*while(t--)*/
        solve();

    

}