#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
    ll x, y;
    cin >> x >> y;
  
    cout << 2 + (x - y - 1) * 2 << endl;
    cout << y << " ";
    for (int i = y+1; i <= x; i++) {
        cout << i << " ";
    }
    for (int i = x - 1; i >= y+1; i--) {
        cout << i << " ";
    }
    cout << endl;
    

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