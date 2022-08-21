#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n;
    cin >> n;
    vector<ll>a(n), b(n),ansa(n),ansb(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if (i < n / 2) {
            ansa[i] =  ansb[i] = 1;
        }
    }
    for (int i = n / 2; i < n ; i++) {
        if (a[i] <= b[n-i-1])
            ansa[i] = 1;
        if (b[i] <= a[n-i-1])
            ansb[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
       cout<< ansa[i] ;
     
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ansb[i];

    }

}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
//    ll t;
//	cin >> t;
//	while (t--)
    solve();

}