#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() 
{
    ll n;
    cin >> n;
    vector<ll> v(n+1);
    bool valid = true;
    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        if (x > i ) {
            cout << "NO";
            return;
        }
        v.insert(v.begin() + x , x);
    }

    cout << "YES"<<endl;
    for (int i = 1; i <= n; i++) {
        cout << v[i] << " ";
    }
    
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
	 ll t;
  /*  cin >> t;
    while (t--)*/
        solve();
}