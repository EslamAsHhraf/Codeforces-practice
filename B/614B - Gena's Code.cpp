#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n, cnt = 0;
    string s, unBeautiful = "1";
    cin >> n;
    for (ll i = 0; i < n; i++) 
    {
        cin >> s;
        if (s == "0") 
        {
            cout << 0;
            return 0;
        }
        bool beautiful =( s[0] == '1');
        for (ll j = 1; j < s.size(); j++)
            beautiful &= (s[j] == '0');
        if (beautiful)
            cnt += s.size() - 1;
        else
            unBeautiful = s;
    }
    cout << unBeautiful;
    for (ll i = 0; i < cnt; i++) 
        cout << 0;
    return 0;
}