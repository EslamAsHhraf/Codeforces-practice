#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    bool p[1000000 + 6];
    memset(p, true, sizeof p);
    ll N = 1e6 + 5;
    p[0] = p[1] = false;
    for (ll i = 2; i * i < N; i++) {
        if (p[i]) {
            for (ll j = i * i; j < N; j += i) {
                p[j] = false;
            }
        }
    }
    ll n,a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (ceil(sqrt(a)) * ceil(sqrt(a)) == a) {
            if (p[(ll)sqrt(a)]) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else
            cout << "NO" << endl;
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