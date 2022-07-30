#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct pp {
    ll s;
    ll p;
    string d;
};
bool com(pp a, pp b) {
    return (a.s == b.s) ? a.p<b.p : a.s>b.s;
}

void solve() 
{
    vector<pp>v;
    ll n;
    cin >> n;
    ll s, p;
    string d;
    while (n--) {
        cin >> d >> s >> p;
        pp nq;
        nq.d = d;
        nq.s = s;
        nq.p = p;
        v.push_back(nq);
    }
    sort(v.begin(), v.end(), com);
    cout << v[0].d << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
    ll t;
   cin >> t;
   while (t--)
        solve();
}