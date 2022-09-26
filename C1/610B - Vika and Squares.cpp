#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n,a,Min=LLONG_MAX,start=0,end=0,bet=0,before=0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a < Min) {
            Min = a;
            before= end= start = i;
        
        }
        else if (a == Min){
            end = i;
            bet =max(bet, end - before + 1-2);
            before = end;
        }
    }
    ll ans = 0;
    if ((bet + ((start - 0) + (n - 1 - end)) * (Min )) > ((start - 0) + (n - 1 - end)) * (Min + 1))
        ans += bet + ((start - 0) + (n - 1 - end)) * (Min);
    else
        ans += (start - 0) * (Min + 1) + (n - 1 - end) * (Min + 1);
    cout << ans + (end - start + 1)*Min;
  
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