#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k % 4 == 0) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    if (k % 2 == 1)
    {
        for (int i = 1; i < n; i+=4) {
            cout << i << " " << i + 1 << endl;
        }
    }
    else {
        for (int i = 1; i < n; i+=4) {
            cout << i+1 << " " << i  << endl;
        }
    }
    for (int i = 4; i <= n; i+=4) {
        cout << i - 1 << " " << i << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   /* freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    ll t;
	cin >> t;
    for (int i = 1; i <= t; i++) {
 
        solve();
        
    }
    
}