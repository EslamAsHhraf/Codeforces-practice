#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() 
{
   ll n, k,count=0;
    cin >> n >> k;
    vector<ll>v;
    vector<pair<ll,ll>>d;
    bool ok = 0;
    for (int i = 1; i <= k; i++) {
        string binary = bitset<17>(i).to_string();
        reverse(binary.begin(), binary.end());
        for (int j = 0; j < 18; j++) {
            if (binary[j] == '1')
            {
                d.push_back({ pow(2,j) ,i });
                break;
            }
        }
    }
    sort(d.rbegin(), d.rend());
  
    for (int i = 0; i < d.size(); i++) {
        if (d[i].first  <= n)
            n -= d[i].first, v.push_back(d[i].second);
        if ( n==0) {
            ok = true;
            break;
        }
    }
    if (!ok)
    {
        cout << -1;
        return;
    }
   cout << v.size()<<endl;
   for (int i = 0; i < v.size(); i++) {
       cout << v[i] << " ";
   }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
	 ll t;
  /*  cin >> t;
    while (t--)*/
        solve();
}