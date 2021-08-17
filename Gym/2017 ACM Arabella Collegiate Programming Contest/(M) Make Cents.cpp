#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t;
	char s[10];
	scanf("%d", &t);
	while (t-- > 0)
	{
		int n, c;
		double aa, ans = 0;
		scanf("%d", &c);
		scanf("%d", &n);
		map<string, double>myMap;
		while (c--)
		{
			scanf("%s %lf", s, &aa);
			myMap.insert({ s,aa });
		}
		myMap["JD"] = 1;
		while (n--)
		{
			scanf("%lf %s", &aa, s);
			if (s == "JD")
				ans += aa;
			else
				ans += myMap[s] * aa;
		}
		printf("%.6f\n", ans);
	}
}
