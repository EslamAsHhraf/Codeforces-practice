#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
	if (b == 0)return a;
	return gcd(b, a%b);
}
ll lcm(ll a, ll b)
{
	return (a * b) / gcd(a, b);
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n, a, b, p, q;
	cin >> n >> a >> b >> p >> q;
	ll CommDiv = n / lcm(a, b);
	cout << ((p*((n / a) - CommDiv)) + (q*((n / b) - CommDiv)) + ((CommDiv)*max(p, q)));
}