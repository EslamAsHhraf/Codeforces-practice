#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll v1, v2, d, t;
    cin >> v1 >> v2 >> t >> d;
    int i = 0;
    t -= 2;
    ll ans = v1 + v2, v = v1;
    for (; i < t; i++) {
        if (v + d - (t - i) * d > v2) {
            break;
        }
        else {
            ans += v + d;
            v += d;
        }
    }

    v = v2;
    for (int j = t - 1; j >= i; j--)
    {
        ans += v + d;
        v += d;
    }
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    /* cin >> t;*/
     /*while(t--)*/
    solve();


}