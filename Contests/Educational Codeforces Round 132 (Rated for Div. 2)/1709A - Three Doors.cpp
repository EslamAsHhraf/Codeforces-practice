#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() 
{
    ll x,d=0;
    vector<ll>v(4);
    vector<bool>b(4);
    cin >> x;
    for (int i = 1; i <= 3; i++)
        cin >> v[i];
    
    while (true) {
        x = v[x];
        if (b[x]|| (x==0 && d<2))
        {
            cout << "NO" << endl;
            return;
        }
        b[x] = 1;
        d++;
        if (d == 2)
            break;
    }
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
    ll t;
   cin >> t;
   while (t--)
        solve();
}