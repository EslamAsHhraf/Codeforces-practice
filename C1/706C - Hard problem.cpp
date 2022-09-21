#include<bits/stdc++.h>
using namespace std;
#define ll  long long
vector<ll>c;
ll n;
string s[100001][2];
ll  dp[100001][2];
void solve()
{
    cin >> n;
    c.resize(n);
  
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i][0];
        s[i][1] = s[i][0];
        reverse(s[i][1].begin(), s[i][1].end());
        for (int j = 0; j < 2; j++)
        {
            dp[i][j] = 1e18;
            for (int k = 0; k < 2; k++)
            {
                if (s[i][j] >= s[i - 1][k])
                    dp[i][j] = min(dp[i][j], dp[i - 1][k] + j * c[i-1]);
            }
        }
    }
    ll ans = min(dp[n][0], dp[n][1]);
   cout<< (ans >= 1e18 ? -1 : ans);
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