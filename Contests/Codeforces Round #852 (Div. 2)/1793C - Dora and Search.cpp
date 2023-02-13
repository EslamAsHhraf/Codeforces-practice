#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
    ll n;
    cin >>n;
    vector<ll>v(n);
    ll Min = 1, Max = n, l = 0, r = n - 1;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    while (r-l>=2 && (v[l] == Min || v[l] == Max || v[r] == Min || v[r] == Max)) 
    {
        if (v[l] == Min) {
            Min++;
            l++;
        }
        if (v[l] == Max) {
            Max--;
            l++;
        }
        if (v[r] == Min) {
            Min++;
            r--;
        }
        if (v[r] == Max) {
            Max--;
            r--;
        }
    }
    if (r - l < 2) {
        cout << -1;
    }
    else {
        cout << l+1<<" " << r+1;
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