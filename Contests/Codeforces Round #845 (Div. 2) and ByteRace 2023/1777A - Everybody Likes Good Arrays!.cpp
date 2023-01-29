#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n, a,ans=0;
    cin >> n ;
    cin >> a;
    bool flag = a % 2;
    n--;
    while (n--) {
        cin >> a;
        if (flag == a % 2)
            ans++;
        else
            flag = a % 2;
    }

    cout << ans<<endl;
	
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    cin >> t;
    while(t--)
        solve();


}