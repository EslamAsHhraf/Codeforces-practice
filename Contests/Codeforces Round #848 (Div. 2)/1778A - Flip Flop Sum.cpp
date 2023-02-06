#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n,sum=0;
    cin >> n;
    vector<ll>v(n);
    cin >> v[0];
    sum += v[0];
    bool flag = 1,flag2=1;
    for (int i = 1; i < n; i++) {
        cin >> v[i];
        sum += v[i];
        if (!flag)
            continue;

        if (v[i] == -1 && v[i - 1] == -1) {
            sum += 4;
            flag = 0;
        }
        else if (flag && (v[i] == 1 && v[i - 1] == -1) || (v[i - 1] == 1 && v[i] == -1)) {
                flag2 = 0;
        }
       
    }
    if (flag && flag2)
        sum -= 4;
    cout << sum << endl;
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