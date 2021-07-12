#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long  n,Max=0,num=0,count=0;
	string s;
	bool b = 0,in=0;
	cin >> n;
	cin >> s;
	for (long long i = 0; i < n; i++)
	{
		count = 0;
		if (!b)
		{
			while (s[i] != '_' && s[i]!='(')
			{
				i++;
				count++;
				if (i >= n)
					break;
			}
			Max = max(Max, count);
			if (i< n && s[i] == '(')
			{
				b = 1;
				continue;
			}
	    }
		else
		{
			if (s[i] != '_')
			{
				while (s[i] != '_'&& s[i]!=')')
				{
					in = 1;
					i++;
					if ( i>= n)
						break;
				}
				if (in)
				{
					num++;
					in = 0;
				}
				if (i<n && s[i] == ')')
				{
					b = 0;
					continue;
				}
			}
		}
	}
	cout <<Max<<" "<<num;
}