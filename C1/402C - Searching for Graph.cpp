#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n, p;
    cin >> n >> p;
    p += 2 * n;
    for(int i=1;i<=n;i++)
        for (int j = i + 1; j <= n; j++) {
            cout << i << " " << j<<endl;
            p--;
            if (p == 0)
                return;
        }
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
    ll t;
	cin >> t;
	while (t--)
     solve();

}