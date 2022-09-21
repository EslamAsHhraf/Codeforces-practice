#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
	ll n, x, t=0, q;
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) {
			cin >> x;
			if (i == j && x == 1)
				t = 1 - t;
		}
	}
	cin >> q;
	while(q--){
		cin >> x;
		if (x == 3)
			cout << t;
		else
			cin >> x, t = 1 - t;
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