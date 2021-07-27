#include<bits/stdc++.h>
using namespace std;
int fact(int n) {
	if (n == 0 || n == 1)
		return 1;

	else
		return n * fact(n - 1);
}
int main()
{
	std::ios_base::sync_with_stdio(false);//to make time less (you display the c)
	string s1, s2;
	long long n1 = 0, n2 = 0,q=0,t;
	double ans = 0;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] == '+')
			n1++;
		else
			n1--;
		if (s2[i] == '+')
			n2++;
		else if (s2[i] == '-')
			n2--;
		else
			q++;
	}
	if (q == 0)
	{
		if (n1 == n2)
			ans = 1;
		else if ( n1 != n2)
		{
			ans = 0;
		}
	}
	else
	{
		t= q+ (n1 - n2);

		if (t % 2 == 0 && t / 2 >= 0 && t / 2 <= q) 
			ans = fact(q) / (fact(q - t / 2)*fact(t / 2));
		else
			ans = 0;
		ans /= pow(2, q);
	}
	printf("%.12f", ans);
}