#include<bits/stdc++.h>
using namespace std;
#define ll  long long
const int sz = 1e3+5;
bool isPrime[sz + 1];

void sieve()
{
    memset(isPrime, true, sizeof(isPrime));

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= sz; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < sz; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    sieve();
    vector<ll>v;
    for (int m = 2; m <= n; m++)
    {
        if (isPrime[m])
        {
            v.push_back(m);
            ll lolo = m;
            for (int i = 1; i<= n; i++) {
                lolo *= m;
                if (lolo <= n)
                    v.push_back(lolo);
                else
                    break;
            }
        }
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
 /*   ll t;
	cin >> t;
	while (t--)*/
     solve();

}