#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int XOR[1100000];
void solve()
{
    int ans = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        ans ^= p;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        XOR[i] = XOR[i - 1] ^ i;
        int len = i + 1;
        int res = n % (len * 2);
        if (res >= len)
        {
            ans ^= XOR[i];
            res -= len;
        }
     
         ans ^= XOR[res];
    }
    cout << ans;
    
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
 /*   ll t;
	cin >> t;
	while (t--)*/
     solve();
    
}