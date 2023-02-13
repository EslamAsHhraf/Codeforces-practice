#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
    ll a, b,n,m;
    cin >> a >> b >> n >> m;
  
    if ((m * a > (m + 1) * b))
            cout << n * b << endl;
    else
    {
        ll num = n / (m + 1);
        cout << num * m * a+((n-num*(m+1))*min(a,b)) << endl;
    }

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