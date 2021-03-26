#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,k,n) for(i=k;i<n;i++)
#define pb push_back
typedef long long int ll;
// long long binpowmod(long long a, long long b, long long m) {
//     a %= m;
//     long long res = 1;
//     while (b > 0) {
//         if (b & 1)
//             res = res * a % m;
//         a = a * a % m;
//         b >>= 1;
//     }
//     return res;
// }
void solve(){
    ll n,u,r,d,l;
    cin>>n>>u>>r>>d>>l;
    ll u1,r1,d1,l1;
    u1=u;
    r1=r;
    d1=d;
    l1=l;
    if(u==n){
        l1--;
        r1--;
    }
    if(r==n){
        u1--;
        d1--;
    }
    if(d==n){
        r1--;
        l1--;
    }
    if(l==n){
        u1--;
        d1--;
    }
    if(u==n-1){
        if(l1>r1) l1--;
        else r1--;
    }
    if(r==n-1){
        if(u1>d1) u1--;
        else d1--;
    }
    if(d==n-1){
        if(l1>r1) l1--;
        else r1--;
    }
    if(l==n-1){
        if(d1>u1) d1--;
        else u1--;
    }
    if(l1<0||r1<0||d1<0||u1<0) cout<<"NO\n";
    else cout<<"YES\n";
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
