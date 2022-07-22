#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() 
{
    string s, t;
    cin >> s >> t;
    map<ll, ll>myMap;
    for (int i = 0; i < t.size(); i++) {
        myMap[t[i]]++;
    }
    ll ans1 = 0, ans2 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (myMap[s[i]] > 0) 
        {
            ans1++;
            myMap[s[i]]--;
            s[i] = ' ';
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i]!=' ')
        {
            if (islower(s[i]) && myMap[toupper(s[i])])
            {
                ans2++;
                myMap[toupper(s[i])]--;
           }
            else if (isupper(s[i]) && myMap[tolower(s[i])])
            {
                ans2++;
                myMap[tolower(s[i])]--;
            }
        }
    }
    cout << ans1 << " " << ans2;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
	 ll t;
  /*  cin >> t;
    while (t--)*/
        solve();
}