#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Max = -1;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
void Divisors(ll n)
{
    for (ll i = sqrt(n); i >0; i--)
    {
        if (n % i == 0)
        {
            if (gcd(n / i, i) == 1)
            {
                cout << i << " " << n / i << endl;
                return;
            }
           
        }
  
    }
}
void solve()
{
	ll n;
	cin >> n;
    Divisors(n);
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
		solve();
	
}