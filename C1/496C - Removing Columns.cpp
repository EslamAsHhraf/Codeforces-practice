#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n, m,ans=0;
    cin >> n >> m;
    vector<string>v(n),temp(n);
    cin >> v[0];
    set<ll>mySet;
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
    }
    
    bool flag = 0;
   
    for (int j = 0; j < m; j++) {
        flag = 0;
        for (int i = 1; i < n; i++)
        {
            if (temp[i] == temp[i - 1] && v[i][j] < v[i - 1][j]) {
               
                    ans++;
                    flag = 1;
                    break;
               
            }
        }
        if (flag)
            continue;
        for (int i = 0; i < n; i++)
        {
            temp[i].push_back(v[i][j]);
        }
            
    }
    
    cout << ans;
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