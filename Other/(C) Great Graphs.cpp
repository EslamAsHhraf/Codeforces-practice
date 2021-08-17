#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);//to make time less (you display the c)
	long long n, t;
	cin >> t;
	while (t-- > 0)
	{
		cin >> n;
		vector <long long>v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		long long ans = v[n - 1], sum = 0;
		for (int i = 1; i < n; i++)
		{
			sum += (v[i] - v[i - 1])*i;
			ans -= sum;
		}
		cout << ans << endl;
	}
}