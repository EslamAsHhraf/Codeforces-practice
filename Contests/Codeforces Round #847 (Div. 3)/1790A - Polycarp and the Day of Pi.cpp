#include<bits/stdc++.h>
using namespace std;
#define ll  long long

string pi = "314159265358979323846264338327";
void solve()
{
    string s;
    cin >> s;
    int i = 0;
    for (; i < s.size(); i++) {
        if (s [i] != pi[i])
            break;
    }
    cout << i<<endl;
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