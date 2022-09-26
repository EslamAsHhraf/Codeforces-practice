#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int arr[1005][1005];
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    map<int, int>myRow,myCol;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
            myCol[j] = j;
        }
        myRow[i] = i;
    }
    int a, b;
    char c;
    while (k--) {
        cin >> c >> a >> b;
        if (c == 'g') {
            cout << arr[myRow[a]][myCol[b]] <<"\n";
        }
        else if (c=='r') {
            swap(myRow[a], myRow[b]);
        }
        else {
            swap(myCol[a], myCol[b]);
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
    

}