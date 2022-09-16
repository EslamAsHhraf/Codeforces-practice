#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n, m, k;
    ll a, b, c;
    cin >> n >> m >> k;
    vector<pair<ll, ll>>row(n), col(m);
    for (int i = 0; i < k; i++) {
        cin >> a >> b >> c;
        if (a == 1) {
            row[b - 1] = { c,i + 1 };
        }
        else {
            col[b - 1] = { c,i + 1 };
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (col[j].second > row[i].second) {
                cout << col[j].first;
            }
            else {
                cout << row[i].first;
            }
            cout << " ";
        }
        cout << endl;
    }
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