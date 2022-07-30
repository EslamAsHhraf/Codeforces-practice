


#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
#include<algorithm>
#include<set>
#include<map>
#define AboNasser cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;
#define ll long long
typedef pair<ll, ll> pr;

void solve()
{
     int n, k;
     cin >> n >> k;
     vector<int>arr(n);
     for (int i = 0;i < n;i++)
         cin >> arr[i];
    
     int ans = 0;
     for (int i = 0;i < 1 << n;i++)
     {
         int sum = 0, coins = 0, mincoin = 10000;
         for (int j = 0;j < n;j++)
         {
             if (i & (1 << j))
             {
                 sum += arr[j];
                 coins++;
                 mincoin = min(arr[j], mincoin);
             }
         }
         if ((sum - mincoin) < k && sum >= k)
             ans = max(ans, coins);
        }
     cout << ans << endl;
}


int main()
{
    AboNasser
        //	freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
        ll t;
    cin >> t;
    while (t--)
        solve();
	return 0;

}






