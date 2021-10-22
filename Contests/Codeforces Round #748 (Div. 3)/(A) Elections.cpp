#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t;
	cin >> t;
	while (t-- ) {
		int a, b, c;
		cin >> a >> b >> c;
		cout << max(0, max(b, c) + 1 - a) << " ";
		cout << max(0, max(a, c) + 1 - b) << " ";
		cout << max(0, max(a, b) + 1 - c) << " ";
	}
}
