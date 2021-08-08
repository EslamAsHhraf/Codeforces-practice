#include <bits/stdc++.h>
using namespace std;



int main() {

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
	while (t--)
	{
		string s;
		cin >> s;

		bool palindrome = true;
		int sz = s.size();

		int maxOdd = 0;
		int maxEven = 0;
		for (int i = 0; i < sz; i++)
		{

			if ((ch.find(s[i]) != ch.end()))
			{

				int cnt = 1;
				maxOdd = max(maxOdd, cnt);
				int ptrB = i - 1, ptrA = i + 1;
				while (ptrB >= 0 && ptrA <= sz - 1)
				{
					if (s[ptrA] == s[ptrB] && ch.find(s[ptrA]) != ch.end())
					{
						cnt += 2; maxOdd = max(maxOdd, cnt);
						ptrB--; ptrA++;
					}
					else break;
				}
			}
		}
		for (int i = 0; i < sz; i++)
		{

			if ((s[i] == s[i + 1]) && (ch.find(s[i]) != ch.end()))
			{

				int cnt = 2;
				maxOdd = max(maxOdd, cnt);
				int ptrB = i - 1, ptrA = i + 2;
				while (ptrB >= 0 && ptrA <= sz - 1)
				{
					if (s[ptrA] == s[ptrB] && ch.find(s[ptrA]) != ch.end())
					{
						cnt += 2; maxEven = max(maxEven, cnt);
						ptrB--; ptrA++;
					}
					else break;
				}
			}
		}


		cout << max(maxOdd, maxEven) << '\n';
	}

}
