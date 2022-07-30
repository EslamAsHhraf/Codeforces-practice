#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() 
{
    string s;
    cin >> s;
    ll bar = 0, qes = 0;
    for (int i = 0; i < s.size();i++) {
        if (s[i] == '(') 
            bar++;
        else if (s[i] == ')') 
            bar--;
        else 
            qes++;
        if (bar + qes <= 1) 
                bar += qes, qes = 0;
    }
    cout << ((bar == qes) ? "YES" : "NO")<<endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
    ll t;
   cin >> t;
   while (t--)
        solve();
}