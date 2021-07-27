#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m; double min = 0;
	cin >>m >>n;
	vector<long long>v(m);
	for (int i = 0; i < m; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	min = (v[0] > min)?v[0]:min;
	min = (n-v[m-1] > min)?n-v[m-1]:min;
	for (int i = 0; i < v.size()-1; i++)
	{
		min = ((v[i+1] - v[i])/2.0 > min) ? (v[i + 1] - v[i])/2.0 : min;
	}
	printf("%.10lf", min);
}