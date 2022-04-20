#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int indx = 0;
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (int i = 0;i<s.size();i++)
    {
        if (s[i] == '4')
            indx += pow(2,i) * 1;
        else
            indx += pow(2, i) * 2;
    }
    
    cout << indx;
}