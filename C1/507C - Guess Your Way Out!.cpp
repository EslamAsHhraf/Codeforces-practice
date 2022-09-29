#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll h,n,ans=0;
    cin >> h>>n;
    bool rr=0;
    
 
    while (h) {
        if (pow(2, h-1) >= n)
        {
            if (rr)
                    ans += (pow(2, h)-1);
            rr = 1;
        }
        else {
            if (!rr)
            {
                 ans += (pow(2, h) - 1);
            }
            rr = 0;
            n -= pow(2, h - 1);
        }
        ans++;
        h--;
    }
   
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    /* cin >> t;*/
     /*while(t--)*/
    solve();


}