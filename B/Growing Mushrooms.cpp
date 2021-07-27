#include<bits/stdc++.h>
using namespace std;
int main()
{
	//std::ios_base::sync_with_stdio(false);//to make time less (you display the c)
	double n, t1, t2, k, aa, bb;
	cin >> n >> t1 >> t2 >> k;
	vector<pair<double, long long>>v;
	for (int i = 1; i <= n; i++)
	{
		cin >> aa >> bb;
		double temp1 = aa * t1 - (aa*t1*k / 100.0) + bb * t2;
		double temp2 = bb * t1 - (bb*t1*k / 100.0) + aa * t2;
		temp1 = (temp1 < temp2) ? temp2 : temp1;
		v.push_back(make_pair(-1 * temp1, i));
	}
	sort(v.begin(), v.end());
	for (auto i : v)
	{
		cout << i.second << " " << fixed << setprecision(2) << -1 * i.first << endl;
	}

}