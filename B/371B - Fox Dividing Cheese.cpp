#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long

void solve() {
    vector<ll>fact1(3), fact2(3);
    ll A, B;

    cin >> A >> B;

    if (A == B)
    {
        cout << "0";
        return ;
    }

    while (A)
    {
        if (!(A % 2))
            fact1[0]++, A /= 2;
        else if (!(A % 3))
            fact1[1]++, A /= 3;
        else if (!(A % 5))
            fact1[2]++, A /= 5;
        else
            break;
    }

    while (B)
    {
        if (!(B % 2))
            fact2[0]++, B /= 2;
        else if (!(B % 3))
            fact2[1]++, B /= 3;
        else if (!(B % 5))
            fact2[2]++, B /= 5;
        else
            break;
    }

    if (A != B)
        cout << "-1";
    else
        cout << abs(fact1[0] - fact2[0]) + abs(fact1[1] - fact2[1]) + abs(fact1[2] - fact2[2]);
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
   // ll t;
    //cin >> t;
    //while (t--)
        solve();
}