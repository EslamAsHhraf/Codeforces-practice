#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n, t,count=0;
    string s1, s2,s3;
    cin >> n >> t >> s1 >> s2;
    s3 = s1;
    ll target = 0;
    set<ll>mySet;
    for (int i = 0; i < n; i++) {
        if (s1[i] == s2[i])
        {
            count++;
            if(count<=n-t)
                 mySet.insert(i);
        }
    }
    if (!(2 * (n - t) - n <= count)) {
        cout << -1;
        return;
    }
    if (count > (n - t))
    {
        for (int i=0; i < n; i++) {
            if (mySet.count(i) == 0) {
                char temp = 'a';
                while (temp == s1[i] || temp == s2[i])
                    temp++;
                s3[i] = temp;
            }
        }
    }
    else {
        target = count;
        for (int i = 0; i < n; i++) {
            if (target == n - t)
                break;
            if (mySet.count(i) == 0) {
                mySet.insert(i);
                target++;
            }
           
        }
        target = count;
        int i = 0;
        for (; i < n; i++) {
            if (target == n - t)
                break;
            if (mySet.count(i) == 0) {
                s3[i] = s2[i];
                target++;
            }
           
        }
        for (; i < n; i++) {
            if (mySet.count(i) == 0) {
                char temp = 'a';
                while (temp == s1[i] || temp == s2[i])
                    temp++;
                s3[i] = temp;
            }
        }
    }
    cout << s3;
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