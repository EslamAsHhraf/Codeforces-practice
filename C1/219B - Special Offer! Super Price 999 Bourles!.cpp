#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n, d;
    cin >> n >> d;
    vector<int>v;
    ll t = 1;
    ll ans = n;
    while (n)
    {
        v.push_back(n % 10);
        n /= 10;
    }
    for (int i =0; i < v.size()-1; i++) {
        if (v[i] != 9) {
            if (d >=( v[i] + 1)*t)
            {
                d -= (v[i] + 1) * t;
                ans-= (v[i] + 1) * t;
                v[i] = 9;
               
                ll temp = i+1;
                if (v[temp] == 0) {
                    while (temp != v.size() - 1 && v[temp] == 0) {
                        v[temp] = 9;
                        temp++;
                    }
                  
                }
              
                    v[temp]--;
                
            }
            else
                break;
        }
        t *= 10;
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