


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
map<int, int>mp;
vector<int>arr;
vector<int> getDivisors(int n)
{
    vector<int>v;
    bool f = false;
    //vector<int> v;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
            {
                if (mp[i] == 2)
                {
                    v.push_back(i);
                    v.push_back(i);
                    return v;
                }
            }
            else
                if (mp[i] && mp[n / i])
                {
                    v.push_back(i);
                    v.push_back(n/i);
                    return v;
                }
        }
    }

    return v;
}

void solve()
{
     ll n, k;
     cin >> n >> k;
    // vector<int>d = getDivisors(k);
     arr.resize(n);
     for (int i = 0;i < n;i++)
         cin >> arr[i];
     for (int i = 0;i < arr.size();i++)
     {
         mp[arr[i]]++;
     }
     vector<int>d =getDivisors(k);
     if (d.size() == 0)
         cout << -1 << endl;
     else
     {
         cout << d[0] << ' ' << d[1] << endl;
     }
     mp.clear();

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






