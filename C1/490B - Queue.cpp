#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int n, p, q;

int a[1000001], b[1000001];
void solve()
{
    cin >> n;

    for (int x = 0; x < n; x++) {
        cin >> p >> q;
        a[p] = q;

        b[p]++;
        b[q]--;

    }

    int i = 0;
    int h = a[0];
    while (b[++i] != 1);



    while (i && h) {
        cout << i << " " << h << " ";
        i = a[i];
        h = a[h];
    }
    if (i) cout << i;
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