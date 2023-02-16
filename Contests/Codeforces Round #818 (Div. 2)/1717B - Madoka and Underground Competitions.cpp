#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
    int T, n, k, r, c;
    cin >> n >> k >> r >> c;
    for (int i = 1; i <= n; cout << endl, i++)
        for (int j = 1; j <= n; j++)
            if ((i + j) % k == (r + c) % k)cout << "X";
            else cout << ".";
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