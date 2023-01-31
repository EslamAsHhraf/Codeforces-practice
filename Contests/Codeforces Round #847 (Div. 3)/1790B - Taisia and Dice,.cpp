#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
    int n, s, k;
    cin >> n >> s >> k;
   
    double remain = (k)*1.0 / (n - 1);
    int count = (k) % (n - 1);
    cout << (s - k) << " ";
    for (int i = 0; i < count; i++) {
        cout << ceil(remain) << " ";
    }
    for (int i = count; i < (n-1); i++) {
        cout << floor(remain) << " ";
    }
    cout << endl;

}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    cin >> t;
    while(t--)
        solve();


}