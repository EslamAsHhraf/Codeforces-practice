#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    double x, y, xh, yh;
    cin >> x >> y >> xh >> yh;
    double n,a,b,c;
    cin >> n;
    ll ans = 0;
   
    while (n--) {
        cin >> a >> b >> c;
        if ((x*a+b*y+c) >0 ^ (xh * a + b * yh + c) > 0)
            ans++;
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