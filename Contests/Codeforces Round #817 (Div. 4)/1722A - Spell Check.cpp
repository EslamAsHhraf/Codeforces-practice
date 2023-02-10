#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
    ll n;
    string s;
    cin >> n >> s;
    map<char, ll>myMap;
    string tt = "Timur";
    for (int i = 0; i < tt.size(); i++) {
        myMap[tt[i]]++;
    }
    for (int i = 0; i < s.size(); i++) {
        if (myMap[s[i]]==0)
        {
            cout << "NO" << endl;
            return;
        }
        myMap[s[i]]--;
    }
    for (int i = 0; i < tt.size(); i++) {
        if (myMap[tt[i]])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES"<<endl;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  /*  freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    ll t;
    cin >> t;
    while (t--)
        solve();

}