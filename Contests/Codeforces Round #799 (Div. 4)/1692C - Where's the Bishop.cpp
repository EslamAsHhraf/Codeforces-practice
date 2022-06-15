#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll row, col;
	char t;
	bool flag = true;
	char arr[9][9];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> arr[i][j];
			if (flag && i < 7 && i>0 && j < 7 && &j>0) {
				if (arr[i - 1][j - 1] == '#' && arr[i - 1][j + 1] == '#')
				{
					flag = 0;
					row = i + 1;
					col = j + 1;
				}
			}
		}
	}
	cout << row << " " << col << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();

}