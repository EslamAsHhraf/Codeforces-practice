#include<bits/stdc++.h>
using namespace std;
#define ll  long long
char arr[505][505];
bool vis[505][505];
int dx[4] = { 1, 0, 0, -1 };
int dy[4] = { 0, -1, 1, 0 };
ll n, m, k;
void solve()
{
    ll s = 0;
    ll count = 0;
    cin >> n >> m >> k;
    int sx=-1, sy=-1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j< m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == '.') {
                s++;
                if(sx == -1)
                sx = i,sy = j;
            }
        }
    }
    if (k == 0)
        return;
    queue<pair<ll, ll>> q;
    q.push({ sx,sy });
    vis[sx][sy] = 1;
    while (!q.empty()) {
        pair<ll, ll> temp = q.front();
        q.pop();
        count++;
        if ((s-count+1) <= k) {
            arr[temp.first][temp.second] = 'X';
        }
        for (int i = 0; i < 4; i++) {
            if (arr[temp.first + dx[i]][temp.second + dy[i]] == '.' && !vis[temp.first + dx[i]][temp.second + dy[i]]) {
                q.push({ temp.first + dx[i], temp.second + dy[i]});
                vis[temp.first + dx[i]][temp.second + dy[i]] = 1;
            }
            
        }
    }


   
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    ll t;
    /* cin >> t;*/
     /*while(t--)*/
    solve();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }


}