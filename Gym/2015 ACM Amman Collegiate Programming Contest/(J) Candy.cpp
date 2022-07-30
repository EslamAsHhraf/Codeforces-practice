#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() 
{
    ll n, m;
    cin >> n >> m;
    vector<ll>st(205);
    vector<ll>can(205);
    ll temp;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        st[temp]++;
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> temp;
        can[temp]++;
    }
    bool flag = true;
    ll  j = 1;
    for (int i = 5; i <= 15; i++) {
        if (st[i] == 0)
            continue;
        while (j <= 50 && st[i] > can[j])
            j++;
        if (j == 51) {
            flag = false;
            break;
        }
        j++;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
    ll t;
   cin >> t;
   while (t--)
        solve();
}