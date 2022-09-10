#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll a, b;
    cin >> a >> b;
    ll temp = ceil(1.0 * a / 2);
    if (a == 1)
    {
        cout << 1;
    }
    else if (b > temp)
    {
        cout << b - 1;
    }
    else
    {

        cout << b + 1;
    }
 
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