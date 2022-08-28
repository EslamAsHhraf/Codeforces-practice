#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n, m;
    cin >> n >> m;
    if ((n+m)%2!=0) {
        cout << "Burenka" << endl;
    }
    else
        cout << "Tonya" << endl;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
    ll t;
	cin >> t;
	while (t--)
     solve();
    
}