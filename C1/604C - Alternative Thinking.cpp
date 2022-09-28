#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    int n, ans = 1, count = 1, tt = 0;
    cin >> n;
    string s;
    cin >> s;
    bool flag = 0, diff = 0;
    char temp = s[0];
    for (int i = 1; i < n; i++) {
        if (s[i] != temp) {
            ans++;
           
            temp = s[i];
            
        }
       
    }
    cout << min(ans + 2, n);
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