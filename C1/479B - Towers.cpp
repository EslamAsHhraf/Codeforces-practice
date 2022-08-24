#include<bits/stdc++.h>
using namespace std;
#define ll  long long
bool com(pair<ll, ll> a, pair<ll, ll> b) {
    return a.first < b.first;
}
void solve()
{
    ll n,k;
    cin >> n>>k;
    vector<pair<ll, ll>>v(n);
    vector < pair<ll, ll>>ans;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v[i] = { a,i + 1 };
    }
    sort(v.begin(), v.end());
    while (k--) {
        if (v[0].first == v[n - 1].first || v[0].first + 1 == v[n - 1].first)
            break;
        v[n - 1].first--;
        v[0].first++;
        ans.push_back({ v[n - 1].second,v[0].second });
        sort(v.begin(), v.end());
    }
    cout << v[n - 1].first - v[0].first << " " << ans.size()<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
//    ll t;
//	cin >> t;
//	while (t--)
    solve();

}