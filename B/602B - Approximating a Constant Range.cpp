#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n, a, Max = 0, Min = INT_MAX;
    cin >> n;
    vector<ll>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll j = 0, ans = 0, diff;
    multiset<ll>mySet;
    for (int i = 0; i < n; i++)
    {
        mySet.insert(v[i]);
        Max = (*mySet.rbegin());
        Min = (*mySet.begin());
        diff = Max - Min;
        while (diff > 1)
        {
            mySet.erase(mySet.find(v[j]));
            Max = (*mySet.rbegin());
            Min = (*mySet.begin());
            diff = Max - Min;
            j++;
        }
        ans = max(i - j, ans);
    }
    cout << ans + 1;
}