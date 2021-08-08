#include <bits/stdc++.h>
using namespace std;
int arr[100005];

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n; cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int diff = 0; bool no = false;
		for (int i = 0; i < n - 1; i++) {
			diff = arr[i] - arr[i + 1];
			if (diff % 2 != 0) {
				no = true; break;
			}
		}
		no ? cout << "no" << endl : cout << "yes" << endl;
	}
}
