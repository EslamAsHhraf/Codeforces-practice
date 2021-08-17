#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

const int  sz = 105;
int arr[sz];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int i = 1; i <= n; i++)
			arr[i] = i;

		for (int i = 1; i < n; i += 2) {
			int temp = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = temp;
		}
		if (n % 2 != 0) {
			int temp = arr[n];
			arr[n] = arr[n - 1];
			arr[n - 1] = temp;
		}

		for (int i = 1; i <= n; i++) {
			cout << arr[i] << " ";
		}cout << endl;

	}
}
