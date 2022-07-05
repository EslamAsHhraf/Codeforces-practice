#include<bits/stdc++.h>
using namespace std;
#define ll long long
char arr[109][109];

void solve()
{
	ll a,b;
	cin >> a>>b;
    ll count = 0;
    for (int i = 0; i < a; i += 4) {
        for (int j = 0; j < b; j += 2) {
            if (count % 2 == 0) {
                arr[i][j] = '1';
                arr[i][j + 1] = '0';
                arr[i + 1][j + 1] = '1';
                arr[i + 1][j] = '0';
            }
            else {
                arr[i][j] = '0';
                arr[i][j + 1] = '1';
                arr[i + 1][j + 1] = '0';
                arr[i + 1][j] = '1';
            }
            count++;
        }
        count = 0;
    }
    count = 0;
    for (int i = 2; i < a; i += 4) {
        for (int j = 0; j < b; j += 2) {
            if (count % 2 == 0) {
                arr[i][j] = '0';
                arr[i][j + 1] = '1';
                arr[i + 1][j + 1] = '0';
                arr[i + 1][j] = '1';
            }
            else {
                arr[i][j] = '1';
                arr[i][j + 1] = '0';
                arr[i + 1][j + 1] = '1';
                arr[i + 1][j] = '0';
            }
            count++;
        }
        count = 0;
    }
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();

}