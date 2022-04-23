#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	double n, d,t,x,y, slope,y1,y2;
	cin >> n >> d>>t;
	
	
		while (t--) {
			cin >> x >> y;
			if (x + y >= d && x + y <= (2 * n - d) && (x - y >= -d && x - y <= d))
				cout << "YES" << endl;
			else 
				cout << "NO" << endl;
		}
}