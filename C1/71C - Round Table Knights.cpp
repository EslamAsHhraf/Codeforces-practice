#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v,arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
            {
                if (i >= 3)
                    v.push_back(i);
            }
            else {
                if (i >= 3)
                    v.push_back(i);
                if (n / i >= 3)
                     v.push_back(n / i);
            }
        }
    }
    for (int i = 0; i <v.size(); i++) {
        ll limit = (n / v[i]);
        for (int j = 0; j < limit; j++) {
            bool d = 1;
            for (int z = j; z <n; z+=limit) {
                d &= arr[z];
                if (!d)
                    break;
            }
            if (d) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
 /*   ll t;
	cin >> t;
	while (t--)*/
     solve();

}