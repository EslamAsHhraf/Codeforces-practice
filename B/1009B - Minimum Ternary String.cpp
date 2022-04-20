#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[4];
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    int k = n;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
            a[0]++;
        if (s[i] == '2')
        {
            k = i;
            a[2]++;
        }
        if (s[i] == '1')
            a[1]++;
    }
    for (int i = 0; i < k; i++)
    {
        if (s[i] == '0')
            cout << "0";
    }
    for (int i = 0; i < a[1]; i++)
        cout << "1";
    for (int i = k; i < n; i++)
        if (s[i] != '1')
            cout << s[i];

}