#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
    ll n, q,a,b,Max,indx;

    cin >> n >> q;
    vector<ll>v(n + 1),bigger(n+1,0);
    cin >> a>>b;
    Max = max(a,b);
    indx = ((a>b)?1:2);
    v[indx]++;
    for (int i = 3; i <= n; i++) {
        cin >> a;
        if (a > Max)
        {
            bigger[indx] = i;
            Max = a;
            indx = i;
            v[indx]++;
        }
        else {
            v[indx]++;
        }
    }
    bigger[indx] = n+1;
    ll x, y;
    for (int i = 0; i < q; i++) {
        cin >> x >> y;
        if (y >= n)
        {
            if (x != indx)
                cout << v[x];
            else
                cout << v[x]+(y-(n-1));
        }
        else {
            if ((x-1) > (y) )
                cout << 0;
            else if(bigger[x]-1 <=y) {
                cout << v[x];
            }
            else {
                cout << v[x]-((bigger[x]) - y - 2);
            }
        }
        cout << endl;
    }
   
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   /* freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    ll t;
	cin >> t;
    for (int i = 1; i <= t; i++) {
 
        solve();
        
    }
    
}