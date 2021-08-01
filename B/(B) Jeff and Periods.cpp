#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);//to make time less (you display the c)
	long long n, Num = 0,aa;
	// Num ==> num of non valid
	map <long long, pair<long long, long long>>m;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> aa;
		if(m[aa].first!=-1)
		{
			if (m[aa].first == 0)
			{
				m[aa].first = i;// save position for first time
			}
			else
			{
				if (m[aa].second == 0)
				{
					m[aa].second = i - m[aa].first;//save difference
					m[aa].first = i;// save last position 
				}
				else
				{
					if (m[aa].second == i - m[aa].first)
					{
						m[aa].first = i;
					}
					else
					{
						Num++;
						m[aa].first = -1;// make it -1 so know that is falid 
					}
				}
			}
		}
	}
	cout << m.size() - Num << endl;
	for (auto i = m.begin();i!=m.end();i++)
	{
		if(i->second.first!=-1)
			cout << i->first << " " << i->second.second << endl;
	}
}