#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	long long l=n, r=n;
	vector<long long>v(n);
	cin >> v[0];	
	int i =0;
		for (i = 1; i < n; i++)
		{
			cin >> v[i];
			if ( v[i] < v[i - 1])
			{
				l = i ;
				break;
			}
		}
		for (i = l + 1; i < n; i++)
		{
			cin >> v[i];
			if (v[i] > v[i - 1])
			{
				r = i;
				for (i = i+1; i < n; i++)
				{
					cin >> v[i];
				}
				break;
			}
		}
		reverse((v.begin() + l-1), (v.begin() + r));
		for (i = 0; i < n-1; i++)
		{
			if (v[i] > v[i + 1])
			{
				cout << "no";
				return 0;
			}
		}
		cout << "yes"<<endl<<l<<" "<<r;
}