#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    int n;
    bool flag = 0;
    string a, b;

    cin >> n;
    
    cin >> a >> b;

    for (int i = 0; i < n; i++) {
        if (a[i] == b[i])
            continue;
        else if (a[i] == 'R' || b[i] == 'R')
            flag = 1;
    }
    if (flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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