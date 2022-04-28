#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll a, b, a1, b1, a2, b2;
	cin >> a >> b >> a1 >> b1 >> a2 >> b2;
    if ((a >= a1 + a2 && b >= max(b1, b2)) 
    || (b >= b1 + b2 && a >= max(a1, a2)) 
    || (a >= a1 + b2 && b >= max(b1, a2))
    ||(b >= b1 + a2 && a >= max(a1, b2)) 
    || (b >= a1 + b2 && a >= max(a2, b1)) 
    ||(a >= b1 + a2 && b >= max(a1, b2)) 
    || (b >= a1 + a2 && a >= max(b2, b1)) 
    || (a >= b1 + b2 && b >= max(a1, a2)) ){
        cout << "YES"; 
    }
    else
        cout << "NO";
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	solve();

}