#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	long long tot = 0;
	vector<long long> v;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') {
			v.push_back((n - 1 - i) - i);
			tot += i;
		}
		else {
			v.push_back(i - (n - 1 - i));
			tot += n - 1 - i;
		}
	}
	sort(v.begin(), v.end(), greater<int>());
	for (int i = 0; i < n; i++) {
		if (v[i] > 0) { tot += v[i]; }
		cout << tot << ' ';
	}
	cout << '\n';
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    cin >> t;
    while (t--)
        solve();


}