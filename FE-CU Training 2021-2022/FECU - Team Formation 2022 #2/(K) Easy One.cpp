#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	string s;
	cin >> s;
	ll Max = 0,k=s.size()-1;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[k])
		{
			Max = max(Max, k - i);
				break;
		}
	}
	k = 0;
	for (int i = s.size()-1; i >=0; i--) {
		if (s[i] != s[k])
		{
			Max = max(Max,  i-k);
			break;
		}
	}
	cout << Max<<endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while(t--)
		solve();

}