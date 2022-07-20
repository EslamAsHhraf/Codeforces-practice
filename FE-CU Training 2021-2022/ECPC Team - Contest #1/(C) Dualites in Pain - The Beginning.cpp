#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() 
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (int i=0;i<n;i++)
    {
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(), v.end());

    ll lastindex = -1;
    while (v[n - 1].first > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i].first == v[n - 1].first )
            {
                if (v[i].second == lastindex )
                {
                    cout << "NO" << endl;
                    return;
                }
                lastindex = v[i].second;
                v[i].first--;
                sort(v.begin(), v.end());
            }
          
        }
    }
    cout << "YES" << endl;

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
	 ll t;
  /*  cin >> t;
    while (t--)*/
        solve();
}