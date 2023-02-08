#include<bits/stdc++.h>
using namespace std;
#define ll  long long
string name = "codeforces";
void solve()
{
    char a;
    cin >> a;
    if(name.find(a) != string::npos)
	    cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
	
	
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