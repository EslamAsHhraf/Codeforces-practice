#include<bits/stdc++.h>
using namespace std;
#define ll  long long
char path[50];
void solve()
{
    ll n,x=0,y=0;
    cin >> n;
    bool flag = 0;
    for (int i = 0; i < n; i++) {
        cin >> path[i];
        if (path[i] == 'U')
            y++;
        else if (path[i] == 'D')
            y--;
        else if (path[i] == 'R')
            x++;
        else
            x--;
        if (x == 1 && y == 1) {
            flag = 1;
        }
    }
    if (flag)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
	
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