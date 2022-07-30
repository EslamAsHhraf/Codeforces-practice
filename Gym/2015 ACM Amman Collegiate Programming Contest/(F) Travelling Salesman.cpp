#include<bits/stdc++.h>

using namespace std;
typedef long long  ll;
typedef unsigned int ui;
typedef unsigned char uc;
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MOD 1000000007
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll extended_gcd(ll a, ll b,ll&x,ll&y) {
    if (b == 0)
    {
        x=1;
        y=0;
        return a;
    }
    ll x1,y1;
    ll ans= extended_gcd(b, a % b,x1,y1);
    x=y1;
    y=x1-a/b*y1;
    return ans;
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
ll modularInverse(ll a,ll p)
{
    ll x,y;
    extended_gcd(a,p,x,y);
    return (x+p)%p;
}

ll inv[100001];
ll fact_inv[100001];
ll fact[100001];
void mod_inv_range(ll p)
{
    inv[0]=inv[1]=1;
    for(ll i=2;i<100001;++i)
    {
        inv[i]=(p-p/i*inv[p%i]%p)%p;
    }
}
void mod_inv_fact(ll p)
{
    fact_inv[0]=fact_inv[1]=1;
    for(ll i=2;i<100001;++i)
    {
        fact_inv[i]=(inv[i]*fact_inv[i-1])%p;
    }
}

void factorial(ll p)
{
    fact[0]=fact[1]=1;
    for(ll i=2;i<100001;++i)
        fact[i]=(i*fact[i-1])%p;
}
void build_nCk(ll MAX,vector<vector<ll>>&C) {
    for(int i = 0; i < MAX; ++i)
        for(int j = 0; j < MAX; ++j)
            C[i][j] = (j == 0) ? 1 : ( (i == 0) ? 0 : (C[i-1][j-1]+C[i-1][j]))%MOD;
}
int dr[] = { -1, 0, 0, 1 };
int dc[] = { 0, 1, -1, 0 };
ll dist(pair<ll,ll>&p,pair<ll,ll>&q)
{
    return (p.first-q.first)*(p.first-q.first)+(p.second-q.second)*(p.second-q.second);
}
bool is_square(pair<ll,ll>&p1,pair<ll,ll>&p2,pair<ll,ll>&p3,pair<ll,ll>&p4)
{
    ll d12=dist(p1,p2);
    ll d13=dist(p1,p3);
    ll d14=dist(p1,p4);

    ll d23=dist(p2,p3);
    ll d24=dist(p2,p4);

    ll d34=dist(p3,p4);
    if(!(d12&&d23&&d34&&d13&&d24&&d14))
        return 0;
    if(d12==d13&&2*d12==d14&&d23==2*d24)return 1;
    if(d12==d14&&2*d12==d13&&d24==2*d23)return 1;
    if(d14==d13&&d12==2*d13&&d34==2*d24)return 1;
    return 0;
}
vector<bool> primes;
int seive(int n) // O(n log(log(n)))
{
    primes.resize(n+1,1);
    primes[0] = primes[1] = 0;
    int cnt=0;
    for (int i = 2; i <= n; i++)
    {
        if (primes[i])
        {
            ++cnt;
            for (int j = i + i; j <= n; j += i)
                primes[j] = 0;
        }
    }
    return cnt;
}
map<int,ll>primeDivisors;
void PrimeDivisors(int n) // sqrt(n) or less
{
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            ++primeDivisors[i];
        }
    }
    if (n != 1)  ++primeDivisors[n];
}
vector<ll>divisors;
int countDivisors(int n)
{
    int i,cnt=0;
    for (i = 1; i * i < n; i++)
        if (n % i == 0)
            divisors.push_back(i),divisors.push_back(n/i),cnt+=2;
    if(i*i==n)
        divisors.push_back(i),++cnt;
    return cnt;
}
struct comp
{
    bool constexpr operator()(pair<ll, ll>& p1, pair<ll, ll>& p2) const noexcept
    {
        return p1.second > p2.second;
    }
};
vector<vector<pair<ll, ll>>>adj;
bool visited[100009];
ll ans = 0;
void MST(ll s)
{
    priority_queue < pair<ll, ll>, vector < pair < ll, ll >> , comp > pq;
    pq.push(make_pair(s, 0));
    while (!pq.empty())
    {
        pair < ll , ll > curr = pq.top();
        ll f = curr.first;
        ll c = curr.second;
        pq.pop();
        if (visited[f])
            continue;
        ans=max(ans,c);
        visited[f] = 1;
        for (auto& i : adj[f])
        {
            if (!visited[i.first])
            {
                pq.push(i);
            }
        }
    }

}
int main() {
    //freopen("max-pair.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    IO;
    int t;
    cin>>t;
    while(t--)
    {
        memset(visited,0,sizeof(visited));
        adj.clear();
        ans=0;
        int n,m;
        cin>>n>>m;
        adj.resize(n+1);
        for(int i=0;i<m;++i)
        {
            int u,vv,c;
            cin>>u>>vv>>c;
            adj[u].push_back({vv,c});
            adj[vv].push_back({u,c});
        }
        MST(1);
        cout<<ans<<'\n';
    }
    return 0;
}