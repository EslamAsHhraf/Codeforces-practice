#include<bits/stdc++.h>

using namespace std;
typedef long long  ll;
typedef unsigned int ui;
typedef unsigned char uc;
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define mod 1000000007

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return a * b / gcd(a, b);
}

ll pow(ll x, ll power) {
    if (power == 0)
        return 1;
    ll r = pow(x, power / 2);
    if (power & 1)
        return r * r * x;
    return r * r;
}
ll prod(ll n)
{
    if (n == 0)
        return 1;
    if (n < 10)
        return n;
    return max(prod(n / 10) * (n % 10),
               prod(n / 10 - 1) * 9);
}
void build_nCk(ll MAX,vector<vector<ll>>&C) {
    for(int i = 0; i < MAX; ++i)
        for(int j = 0; j < MAX; ++j)
            C[i][j] = (j == 0) ? 1 : ( (i == 0) ? 0 : (C[i-1][j-1]+C[i-1][j]))%mod;
}
int dr[] = { -1, 0, 0, 1 };
int dc[] = { 0, 1, -1, 0 };
inline int check(vector<int>&v1,vector<int>&v2)
{
    for(int i=0;i<26;++i)
    {
        if(v1[i]>v2[i])
            return 0;
    }
    return 1;
}
int main() {
    freopen("gcd.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    IO;
    int q;
    cin>>q;
    ll ans=0;
    vector<pair<ll,ll>>v(q);
    for(auto&i:v)cin>>i.first>>i.second;
    if(v[0].first==v[0].second)
        ans=v[0].first;
    else
        ans=1;
    cout<<ans<<'\n';
    for(int i=1;i<q;++i)
    {
        if(v[i].first==v[i].second&&ans!=1)
        {
            ans=gcd(ans,v[i].first);
        }
        else
        {
            ans=1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}