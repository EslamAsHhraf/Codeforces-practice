#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    const size_t M = 100100;
    bool prime[M];
    prime[0] = false;
    prime[1] = false;
    fill(prime + 2, prime + M, true);
    for (int i = 2; i * i < M; ++i)
    {
        if (prime[i])
        {
            for (int j = i + i; j < M; j += i)
            {
                prime[j] = false;
            }
        }
    }

    int n, m, a, rows[500], cols[500];
    scanf("%d%d", &n, &m);
    fill(rows, rows + n, 0);
    fill(cols, cols + m, 0);

    for (int r = 0; r < n; ++r)
    {
        for (int c = 0; c < m; ++c)
        {
            scanf("%d", &a);
            int x = a;
            while (!prime[x])
            {
                ++x;
            }
            rows[r] += (x - a);
            cols[c] += (x - a);
        }
    }

    int min_row = *min_element(rows, rows + n);
    int min_col = *min_element(cols, cols + m);
    printf("%d\n", min(min_row, min_col));
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    ll t;
   /* cin >> t;*/
    /*while(t--)*/
        solve();

    

}