#include<bits/stdc++.h>
using namespace std;
#define ll long long
char arr[25][25];
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		memset(arr, 0, sizeof(arr));
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j];
			}
		}
		bool flag = false;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == 'p') {
					if (arr[i + 1][j + 1] == 'i' &&arr[i + 2][j + 2] == 'e')
					{
						flag = true; break;
					}
					if (arr[i][j + 1] == 'i' &&arr[i][j + 2] == 'e')
					{
						flag = true; break;
					}
					if (arr[i + 1][j] == 'i' &&arr[i + 2][j] == 'e')
					{
						flag = true; break;
					}
					if (i >= 2 && j >= 2 && arr[i - 1][j - 1] == 'i' &&arr[i - 2][j - 2] == 'e')
					{
						flag = true; break;
					}
					if (j >= 2 && arr[i][j - 1] == 'i' &&arr[i][j - 2] == 'e')
					{
						flag = true; break;
					}
					if (i >= 2 && arr[i - 1][j] == 'i' &&arr[i - 2][j] == 'e')
					{
						flag = true; break;
					}
					if (j >= 2 && arr[i + 1][j - 1] == 'i' &&arr[i + 2][j - 2] == 'e')
					{
						flag = true; break;
					}
					if (i >= 2 && arr[i - 1][j + 1] == 'i' &&arr[i - 2][j + 2] == 'e')
					{
						flag = true; break;
					}
				}
			}
			if (flag) break;
		}
		if (flag) cout << "Cutie Pie!" << endl;
		else     cout << "Sorry Man" << endl;
	}
}
