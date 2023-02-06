#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    int n;
    cin >> n;
    map<ll, ll>myMap;
    vector<vector<int>>v(n);
    for (int i = 0; i < n; i++) {
        int k,a;
        cin >> k;
        for (int j= 0; j < k; j++) {
            cin >> a;
            myMap[a]++;
            v[i].push_back(a);
        }
    }

    for (int i = 0; i < n; i++) {
        bool flag = 1;
        for (auto j:v[i]) {
            if (myMap[j] == 1) {
                flag = 0;
            }
        }
        if (flag == 1) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "No" << endl;
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