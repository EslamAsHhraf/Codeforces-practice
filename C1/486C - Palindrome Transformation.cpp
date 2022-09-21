#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n, p, inc = 0, ans = 0;
    string s;
    set<char>alph;
    for (char t = 'a'; t <= 'z'; t++) {
        alph.insert(t);
    }
    cin >> n >> p >> s;
    p--;
    if (n % 2==0)
    {
        inc = 1;
    }
    ll mid = (ceil(1.0 * n / 2) - 1);
    if (p > mid) {
        p = (n / 2) + (n / 2 - p) - inc;
    }
    if (n == 1)
    {
        cout << 0;
        return;
    }
    
    ll l = p,r=p;
    for (int i = p; i >= 0; i--) {
        char temp = s[(n / 2) + (n / 2 - i) - inc];
        if (s[i] != temp) {
            l = i;
            ans += min(26-abs(s[i] - temp) , abs(s[i] - temp));
        }
    }
    for (int i = p+1; i < ceil(1.0 * n / 2); i++) {
        char temp = s[(n / 2) + (n / 2 - i) - inc];
        if (s[i] != temp) {
            r = i;
            ans += min(26 - abs(s[i] - temp) , abs(s[i] - temp));
        }
    }
    cout << ans+max(p-l,r-p)+2*min(p - l, r - p);
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