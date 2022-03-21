#include<bits/stdc++.h>
using namespace std;
#define ll long long
char B[59][59];
bool visited[59][59];
ll n, m;
int diry[4] = { 1,-1,0,0 };
int dirx[4] = { 0,0,1,-1 };
bool sol( int i, int j,int fx,int fy,char temp,int flag)
{
    if (visited[i][j] || B[i][j] != temp)
    {
        return false;
    }
    visited[i][j] = true;
    for (int z = 0; z < 4; z++)
    {
        int dx = i + dirx[z];
        int dy = j + diry[z];
        if (dx<0 || dy<0 || dx>n - 1 || dy>m - 1)
            continue;
       
        if (dx == fx && dy == fy &&flag > 2)
            return true;
        if(sol(dx, dy, fx, fy, temp, flag + 1))
            return true;
    }
    return false;
}
bool dfs()
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (!visited[i][j])
            {
                memset(visited, false, sizeof(visited));
                if (sol(i, j, i, j, B[i][j], 0))
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    string s;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        for (int j = 0; j < m; ++j)
        {
            B[i][j] = s[j];
        }
    }
    cout<< (dfs()?  "Yes":"No");
}