#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() 
{
    ll n,a;
    cin >> n;
    map <ll, ll> myMap;
    for (int i = 0; i < n; i++) {
        cin >> a;
        myMap[a]++;
    }
    for (int i = 0; i < n - 1; i++) {
        map <ll, ll> m2;
        auto it = myMap.begin();
        while (it != myMap.end())
       {
            if (it->second > 1) 
                m2[0] += it->second - 1;
            if (it != myMap.begin())
                m2[it->first - prev(it)->first]++;
            it++;
        }
        myMap = m2;
    }
    cout << myMap.begin()->first<<endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
    ll t;
    cin >> t;
    while (t--)
        solve();
}