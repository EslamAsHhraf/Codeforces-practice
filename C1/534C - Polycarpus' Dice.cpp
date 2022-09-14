#include<bits/stdc++.h>
using namespace std;
#define ll  long long


void solve()
{
  
    ll n, a,sum=0;
    cin >> n >> a;
    vector<ll>d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
        sum += d[i];
    }
    for (int i = 0; i < n; i++) {
        cout << max((ll) 0, a - (sum - d[i]) - 1)+ max((ll) 0 ,d[i]-(a-n+1))<<" ";
    }
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    ll t;
   /* cin >> t;*/
    /*while(t--)*/
        solve();

    

}