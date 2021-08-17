#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool automaton(string q1, string q2)
{
	int j = 0;
	for (int i = 0; i < q1.size();i++)
	{
		if (q1[i] == q2[j])
			j++;
	}
	return q2.size() == j;
}
bool Array(string q1, string q2)
{
	sort(q1.begin(), q1.end());
	sort(q2.begin(), q2.end());
	return q1== q2;
}
bool both(string q1, string q2)
{
	map<char, ll>m;
	for (int i = 0; i < q1.size(); i++)
	{
		m[q1[i]]++;
	}
	for (int i = 0; i < q2.size(); i++)
	{
		if (m[q2[i]] == 0)
			return 0;
		else
			m[q2[i]]--;
	}
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string s1, s2;
	cin >> s1 >> s2;
	if (automaton(s1, s2))
	{
		cout << "automaton";
	}
	else if (Array(s1, s2))
	{
		cout<< "array";
	}
	else if (both(s1, s2))
	{
		cout << "both";
	}
	else
	{
		cout << "need tree";
	}
}
