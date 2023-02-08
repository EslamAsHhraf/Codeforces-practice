#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    map < int, int>myMap, myMap2;
    vector<int>l(n),r(n+1);
    l[0] = 1;
    myMap[s[0]]++;
    for (int i = 1; i < n; i++) {
        if (!myMap[s[i]])
            l[i] = 1;
        l[i] += l[i - 1];
        myMap[s[i]]=1;
    }
    int ans = -1;
    for (int i = n-1; i > 0; i--) {
        if (!myMap2[s[i]])
            r[i] = 1;
        r[i] += r[i + 1];
        myMap2[s[i]]=1;
        ans = max(ans, r[i] + l[i-1]);
    }
 
    cout << ans << "\n";
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