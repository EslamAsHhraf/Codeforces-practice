#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    vector<ll>dp(n+1,LLONG_MAX);
    dp[0] = 0;
    s.insert(0, "0");
    for (int i = 1; i <= n; i++)
    {
        bool flag = 0;
        dp[i] = min(dp[i], dp[i - 1] + 1);
        for (int j = i - 1; j >= 1; j--)
        {
            if (s[j] == s[j + 1])
                flag = 1;
            if (i - j + 1 <= k)
            {
                if (flag == 1)
                    dp[i] = min(dp[i], dp[j - 1] + 1);
            }
            else
                break;
        }
    }
    cout << dp[n] - 1<<endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();
}