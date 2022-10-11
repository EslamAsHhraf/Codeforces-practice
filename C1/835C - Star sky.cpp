#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    int n, q, c;
    cin >> n >> q >> c;
    int a[105][105][11] = { 0 };
    for (int i = 0; i < n; i++)
    {
        int x, y, s;
        cin >> x >> y >> s;
        for (int j = 0; j < c+1; j++)
        {
            a[x][y][j] += (s + j) % (c + 1);
        }
    }

    for (int i = 0; i < q; i++)
    {
        int sum = 0;
        int t, x1, y1, x2, y2;
        cin >> t >> x1 >> y1 >> x2 >> y2;
        t = t % (c + 1);
        for (int i = x1; i <= x2; i++)
        {
            for (int j = y1; j <= y2; j++)
                sum += a[i][j][t];
        }
        cout << sum << endl;

    }
    
	
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