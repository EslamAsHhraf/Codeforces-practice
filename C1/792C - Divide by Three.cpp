#include<bits/stdc++.h>
using namespace std;
#define ll  long long
string funct1(string s, int t) {
    reverse(s.begin(), s.end());
    int i = 0;
    for (i = 0; i < s.size(); i++) 
    { if ((s[i] - '0') % 3 == t) break; } 
    if (i == s.size()) return string();
    
    s.erase(i, 1);
    while (s.size()!=0 && s.back() == '0' && s.size() > 1) s.pop_back();
    reverse(s.begin(), s.end());
    return s;
}
string funct2(string s, int t) {
    reverse(s.begin(), s.end());
    int i = 0;
    int j = 0;
    for (i = 0; i < s.size(); i++)
        if ((s[i] - '0') % 3 == t) 
            break; 
    if (i == s.size())
        return string();
    for (j = i + 1; j < s.size(); j++)
        if ((s[j] - '0') % 3 == t) 
            break;
    if (j == s.size()) 
        return string();
    s.erase(j, 1); s.erase(i, 1);
    while (s.size() != 0 && s.back() == '0' && s.size() > 1) s.pop_back();
    reverse(s.begin(), s.end());
    return s;
}

void solve()
{
    string s,s1,s2;
    ll sum=0;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        sum +=s[i]-'0';
    }
    ll rem = sum % 3;
    s1 = funct1(s, rem); 
    s2 = funct2(s, 3 - rem);
    if (rem == 0) 
    {
        cout << s; 
         return; 
    }
    if (s2.size() > s1.size())
        s1 = s2;
    if (s1.size() == 0) 
    { 
        cout << -1; 
        return ; 
    }
    cout << s1;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    /* cin >> t;*/
     /*while(t--)*/
    solve();


}