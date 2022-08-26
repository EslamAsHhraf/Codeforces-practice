#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    set<int> alive;
    vector<ll>answer(n);
    for (int i = 0; i < n; i++)
        alive.insert(i);

    for (int i = 0; i < m; i++) {
        int l, r, x;
        cin >> l >> r >> x;
        l--, r--, x--;
        set<int>::iterator it = alive.lower_bound(l);
        vector<int> toErase;
        while (it != alive.end()) {
            int cur = *it;
            if (cur > r)
                break;
            if (cur != x) {
                toErase.push_back(cur);
                answer[cur] = x+1;
            }
            it++;
        }

        for (size_t j = 0; j < toErase.size(); j++)
            alive.erase(toErase[j]);
    }
    for (int i = 0; i < n; i++)
        cout << answer[i]<< " ";
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
 /*   ll t;
	cin >> t;
	while (t--)*/
     solve();

}