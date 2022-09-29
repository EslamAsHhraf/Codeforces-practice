#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n,ans=0;
    ll dp[20000];
    cin >> n;
    dp[0] = 1;
    dp[1] = 2;
    int i = 1;
    while (dp[i] <= n)
    {
        i++;
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << (i - 1) ;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    /* cin >> t;*/
     /*while(t--)*/
    solve();


}