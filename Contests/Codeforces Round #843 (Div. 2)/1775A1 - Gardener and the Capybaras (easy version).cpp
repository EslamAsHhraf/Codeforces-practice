#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    string s;
    cin >> s;
    if(s[1]=='b')
        cout << s[0] << " " <<s.substr(1, s.size() - 2) <<" " << s[s.size()-1]<< endl;
    else
        cout << s[0] << " " << s[1] <<" " << s.substr(2, s.size() - 1) << endl;
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