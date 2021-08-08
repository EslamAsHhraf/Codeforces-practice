#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	set<char> ch;
	ch.insert('A'); //A, H, I, M, O, T, U, V, W, X, Y
	ch.insert('H');
	ch.insert('I');
	ch.insert('M');
	ch.insert('O');
	ch.insert('T');
	ch.insert('U');
	ch.insert('V');
	ch.insert('W');
	ch.insert('X');
	ch.insert('Y');
	while (t-- > 0)
	{
		string s;
		cin >> s;
		bool palindrome = true;
		ll sz = s.size();

		for (int i = 0; i < sz / 2; i++)
		{

			if ((s[i] != s[sz - i - 1]) || (ch.count(s[i]) == 0))
			{
				palindrome = false;
				break;
			}
		}
		if ((ch.count(s[sz / 2]) == 0))
			palindrome = false;
		cout << (palindrome ? "yes" : "no") << '\n';
	}
}
