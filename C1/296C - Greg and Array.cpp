#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
long long n,m,k,a[N],c[N],l,r,d,z[N],i;
struct o{int l,r,d;}p[N];
main(){
    cin>>n>>m>>k;for(i=1;i<=n;i++)cin>>a[i];
    for(i=1;i<=m;i++){cin>>l>>r>>d;p[i]={l,r,d};}
    while(k--){cin>>l>>r;c[l]++;c[r+1]--;}
    for(i=1;i<=m;i++)c[i]+=c[i-1],z[p[i].l]+=c[i]*p[i].d,z[p[i].r+1]-=c[i]*p[i].d;
    for(i=1;i<=n;i++)z[i]+=z[i-1],cout<<a[i]+z[i]<<" ";
}