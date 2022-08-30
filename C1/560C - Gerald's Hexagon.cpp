#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
    vector<ll>a(6);
    for (int i = 0;i < 6; i++)
        cin >> a[i];
    cout<<( (a[0] + a[1] + a[2]) * (a[0] + a[1] + a[2]) - a[0] * a[0] - a[2] * a[2] - a[4] * a[4]);
 
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  /*  freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
   /* ll t;
    cin >> t;
    while (t--)*/
        solve();

}